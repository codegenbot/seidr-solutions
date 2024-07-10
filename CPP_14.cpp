#include <vector>
#include <string>

bool issame(const vector<string>& vec1, const vector<string>& vec2) {
    return vec1 == vec2;
}

vector<string> all_prefixes(string str);

int main() {
    // Sample test
    vector<string> result = all_prefixes("cpp");
    for (const string& s : result) {
        cout << s << " ";
    }
    return 0;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}