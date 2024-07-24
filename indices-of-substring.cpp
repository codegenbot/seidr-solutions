#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int last = 0, pos = 0;

    while ((pos = text.find(target, last)) != string::npos) {
        result.push_back(pos);
        last = pos + 1;
    }

    return result;
}