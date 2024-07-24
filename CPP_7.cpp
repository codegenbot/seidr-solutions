#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(const vector<string>& vec, const string& substr) {
    vector<string> result;
    for (const auto& str : vec) {
        if (str.find(substr) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> filtered = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    vector<string> expected = {"grunt", "prune"};
    
    if (filtered == expected) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}