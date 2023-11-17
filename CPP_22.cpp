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
    vector<int> output;
    for(auto i:values){
        if(i.type()==typeid(int)){
            output.push_back(boost::any_cast<int>(i));
        }
    }
    return output;
}
int main(){
    list_any values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    values.push_back("abc");
    values.push_back(vector<int>());
    values.push_back(list_any());
    vector<int> output = filter_integers(values);
    for(auto i:output){
        cout<<i<<" ";
    }
    return 0;
}
