#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(const vector<string>& a, const vector<string>& b) {
    vector<string> result;
    for (const string& str : a) {
        string reversedStr = str;
        reverse(reversedStr.begin(), reversedStr.end());
        result.push_back(reversedStr);
    }
    for (const string& str : b) {
        result.push_back(str);
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    string combined = "";
    for (const string& str : a) {
        combined += str;
    }
    for (const string& str : b) {
        combined += str;
    }

    string result;
    for (char ch : combined) {
        if (result.find(ch) == string::npos) {
            result += ch;
        }
    }

    string reversedResult = result;
    reverse(reversedResult.begin(), reversedResult.end());

    return reversedResult == "ammamia";
}

int contest_main() {
    assert(issame(reverse_delete({"mamma"}, {"mia"}), {"amam", "mia"}));
    return 0;
}