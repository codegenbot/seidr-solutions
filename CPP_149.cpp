#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(), 
                      [](const string& a, const string& b){return a.length() % 2 && b.length() % 2;});
    vector<string> result(it, lst.end());
    
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if (a.length() == b.length()) {
                 return a < b;
             }
             return a.length() < b.length();
         });
    
    return result;
}