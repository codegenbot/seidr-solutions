#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    // Delete the strings that have odd lengths from it
    for (string str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    
    // Sort the resulted vector with a sorted order
    sort(result.begin(), result.end(), [](const string& s1, const string& s2) {
        if (s1.length() != s2.length()) {
            return s1.length() < s2.length();
        } else {
            return s1 < s2;
        }
    });
    
    return result;
}