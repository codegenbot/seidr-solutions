#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> res;
    int index = 0;
    while (index <= text.length() - target.length()) {
        if (text.substr(index, target.length()).compare(target) == 0)
            res.push_back(index);
        index++;
    }
    return res;
}