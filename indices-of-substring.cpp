Here is the completed code:

#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int last = -1;
    while ((last = text.find(target)) != string::npos) {
        result.push_back(last);
        text = text.substr(last + 1);
    }
    return result;
}