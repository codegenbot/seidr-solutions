/*
Filter given vector of any python values only for integers
>>> filter_integers({"a", 3.14, 5})
{5}
>>> filter_integers({1, 2, 3, "abc", {}, {}})
{1, 2, 3}
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
    vector<int> result;
    for(auto i:values){
        if(i.type()==typeid(int)){
            result.push_back(boost::any_cast<int>(i));
        }
    }
    return result;
}
int main(){
    list_any l1={"a",3.14,5};
    list_any l2={1,2,3,"abc",{},{}};
    vector<int> v1=filter_integers(l1);
    vector<int> v2=filter_integers(l2);
    for(auto i:v1){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i:v2){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
