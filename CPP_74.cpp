#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::any_of(a.begin(), a.end(),
            [s, bstr=b[i]](const std::string& str) { return tolower(str) != tolower(bstr); })) 
            return false;
    }
    return true;
}

std::vector<std::string> total_match(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    vector<string> result;
    for (const string& s : vec1) {
        if (issame(vec1, {s}) && issame({s}, vec2))
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> vec1 = {"hi", "admin"};
    vector<string> vec2 = {"hI", "Hi"};

    vector<string> result = total_match(vec1, vec2);

    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}