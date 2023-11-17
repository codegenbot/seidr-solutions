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
    vector<int> v;
    for(list_any::iterator it = values.begin(); it != values.end(); it++){
        if(it->type() == typeid(int)){
            v.push_back(boost::any_cast<int>(*it));
        }
    }
    return v;
}
int main(){
    list_any l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back("abc");
    l.push_back(4);
    vector<int> v = filter_integers(l);
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
