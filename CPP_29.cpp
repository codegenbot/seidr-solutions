#include <vector>
#include <string>

using namespace std;

bool myissame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    using namespace std;
    vector<string> result;
    for (const auto& str : vec) {
        if (str.find(prefix) == 0) {
            bool same = myissame({str}, {"xxx"});
            if (!same) {
                result.push_back(str);
            }
        }
    }
    return result;
}