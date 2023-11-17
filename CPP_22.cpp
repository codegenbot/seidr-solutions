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
    vector<int> vec;
    for(auto i:values)
        if(i.type()==typeid(int))
            vec.push_back(boost::any_cast<int>(i));
    return vec;
}

int main(){
    list_any l1={"a", 3.14, 5};
    vector<int> l2={1, 2, 3, "abc", {}, {}};
    vector<int> result;
    result=filter_integers(l1);
    for(auto i:result)
        cout<<i;
}
