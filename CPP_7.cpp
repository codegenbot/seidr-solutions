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
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    
    if (result == vector<string>{"grunt", "prune"}) {
        cout << "Test Passed!";
    } else {
        cout << "Test Failed!";
    }

    return 0;
}