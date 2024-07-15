#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> res;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        res.push_back(pos);
        pos += target.size();
    }
    return res;
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    size_t pos = 0;

    while (true) {
        size_t foundPos = text.find(target, pos);

        if (foundPos == string::npos)
            break; // no more matches

        result.push_back(foundPos);
        pos = foundPos + target.size();
    }

    return result;
}