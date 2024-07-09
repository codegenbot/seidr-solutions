#include <string>
#include <vector>

string join(const vector<string>& vec, const string& sep) {
    string result;
    for (const auto& s : vec) {
        if (!result.empty()) {
            result += sep;
        }
        result += s;
    }
    return result;
}