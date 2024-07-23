#include <vector>

#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        if (text.substr(i, target.length()).compare(target) == 0) {
            result.push_back(i);
        }
    }
    return result;
}