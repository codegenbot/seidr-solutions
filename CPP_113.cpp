#include <iostream>
#include <vector>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        result.push_back("The number of odd elements " + to_string(odd_count) + " in the string " + s + " of the input.");
    }
    return result;
}

int main() {
    auto result = odd_count({"271", "137", "314"});
    for (const auto& res : result) {
        cout << res << endl;
    }
    return 0;
}