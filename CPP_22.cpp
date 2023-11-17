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
    vector<int> int_vector;
    for(auto it = values.begin(); it != values.end(); ++it){
        try{
            int_vector.push_back(boost::any_cast<int>(*it));
        }
        catch(const boost::bad_any_cast& e){
            continue;
        }
    }
    return int_vector;
}

int main(){
    list_any values = {1, 2, 3, "abc", {}, {}};
    vector<int> int_vector = filter_integers(values);
    for(auto it = int_vector.begin(); it != int_vector.end(); ++it){
        cout << *it << endl;
    }
    return 0;
}
