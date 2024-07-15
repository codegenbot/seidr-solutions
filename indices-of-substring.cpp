#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> res;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        if (text.substr(i, target.size()) == target) {
            res.push_back(i);
        }
    }
    return res;
}