Here is the solution:

#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    while ((index = text.find(target)) != string::npos) {
        result.push_back(index);
        index += target.length();
    }
    return result;
}