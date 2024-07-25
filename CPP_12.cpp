#include <vector>
#include <string>

using namespace std;

string longest(vector<string> strings) {
    if (strings.empty()) {
        return "";
    }
    string result = strings[0];
    for (const auto& s : strings) {
        if (s.length() > result.length()) {
            result = s;
        } else if (s.length() == result.length()) {
            result = s;  // keep the first one in case of multiple same length
        }
    }
    return result;
}