#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    // Remove strings with odd lengths from the list and add to the result
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    
    // Sort the result by length in ascending order, then alphabetically
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        } else {
            return a < b;
        }
    });
    
    return result;
}