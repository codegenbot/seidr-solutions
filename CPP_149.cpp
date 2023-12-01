#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // Remove strings with odd length
    for (string s : lst) {
        if (s.length() % 2 == 0) {
            result.push_back(s);
        }
    }

    // Sort by length and alphabetically
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        } else {
            return a.length() < b.length();
        }
    });

    return result;
}