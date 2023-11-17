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
#include<boost/any>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
    vector<int> res;
    for(boost::any each : values){
        try{
            res.push_back(boost::any_cast<int>(each));
        }
        catch(const boost::bad_any_cast& e){
            // do nothing
        }
    }
    return res;
}
int main(){
    list_any l;
    l.push_back(3);
    l.push_back(3.14);
    l.push_back(5);
    vector<int> res = filter_integers(l);
    for(int i = 0; i<res.size(); i++){
        cout << res[i] << endl;
    }
    return 0;
}
