#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::transform_reduce(a.begin(), a.end(), b.begin(), [](const auto& s1, const auto& s2) { 
            size_t count1 = std::count(s1.begin(), s1.end(), ::tolower(s1[0]));  
            size_t count2 = std::count(s2.begin(), s2.end(), ::tolower(s2[0]));  
            return (count1 > 0 && count2 > 0) || (count1 == 0 && count2 == 0); 
        }) == false) return false;
    }
    return true;
}

std::vector<std::string> total_match(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    vector<string> result;
    for (const string& s : vec1) {
        if (issame({s}, vec2)) {
            result.push_back(s);
        }
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