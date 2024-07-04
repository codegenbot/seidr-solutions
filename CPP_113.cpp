#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(const vector<string>& lst) {
    vector<string> result;
    for (const auto& str : lst) {
        int odd_count = 0;
        for (char ch : str) {
            if ((ch - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) +
                     " in the string " + str +
                     " of the input.";
        result.push_back(res);
    }
    return result;
}

int main() {
    vector<string> input;
    int n;
    cin >> n;
    input.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> input[i];
    }

    vector<string> result = odd_count(input);
    for (const string& res : result) {
        cout << res << endl;
    }

    return 0;
}