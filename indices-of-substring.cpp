#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0, end = 0;
    while (end < text.size()) {
        if (text.substr(start, target.length()).compare(target) == 0) {
            result.push_back(start);
            start += target.length();
            end = start;
        } else {
            end++;
        }
    }
    return result;
}