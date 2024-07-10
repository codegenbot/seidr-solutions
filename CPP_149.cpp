#include <algorithm>
using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    for (const string& str : lst) {
        if (str.length() % 2 == 0)
            result.push_back(str);
    }
    
    if (result.size() == 0) return result; // added this line
    
    sort(result.begin(), result.end());
    
    return result;
}