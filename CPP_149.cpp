#include <algorithm>

vector<string> sorted_list_sum(vector<string> lst) {
    // Create a copy of the original vector to avoid modifying it
    vector<string> result = lst;

    // Sort the vector based on length and then alphabetically
    std::sort(result.begin(), result.end(),
        [](const string& s1, const string& s2) {
            if (s1.length() == s2.length()) {
                return s1 < s2;
            }
            return s1.length() < s2.length();
        });

    // Remove the strings with odd lengths
    result.erase(std::remove_if(result.begin(), result.end(),
        [](const string& s) { return s.length() % 2; }), result.end());

    return result;
}