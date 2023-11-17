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
#include<boost/any.hpp> //error idea
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
    vector<int> ans;
    for(auto it = values.begin(); it != values.end(); it++){
        if(boost::any_cast<int>(&*it)){
            ans.push_back(boost::any_cast<int>(*it));
        }
    }
    return ans;
}
int main(){
    list_any values = {"a", 3.14, 5};
    vector<int> ans = filter_integers(values);
    for(auto it = ans.begin(); it != ans.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
