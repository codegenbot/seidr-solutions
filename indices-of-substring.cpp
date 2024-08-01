#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0, end = text.length();
    while (start < end) {
        size_t pos = text.find(target, start);
        if (pos == string::npos)
            break;
        result.push_back(pos);
        start = pos + 1;
    }
    return result;
}