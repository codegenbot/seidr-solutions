#include <vector>
#include <string>

using namespace std;

bool filter_by_substring(vector<string> str, string substr) {
    vector<vector<string>> result;
    for (const auto& s : str) {
        if (s.find(substr) != std::string::npos) {
            result.push_back({s});
        } else if (!result.empty() && !issame(result.back(), {s})) {
            return false;
        }
    }
    return true;

}

int main() {
    cout << boolalpha << filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") << endl;
    return 0;
}