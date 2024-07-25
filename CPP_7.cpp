```cpp
#include <vector>
#include <string>

using namespace std;

bool filter_and_check(vector<string> str, string substr) {
    vector<vector<string>> result;
    for (const auto& s : str) {
        if (s.find(substr) != std::string::npos) {
            if (!issame({s}, result)) {
                result.push_back({s});
            }
        }
    }
    return true;

}

int main() {
    assert(filter_and_check({"grunt", "trumpet", "prune", "gruesome"}, "run"));
    return 0;
}