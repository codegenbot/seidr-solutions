#include <vector>
#include <string>
#include <iostream>

using namespace std;

// Corrected odd_count function
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
                     " in the string is " + to_string(odd_count);
        result.push_back(res);
    }
    return result;
}

int main() {
    vector<string> output = odd_count({"271", "137", "314"});
    vector<string> expected = {
        "the number of odd elements 2 in the string is 2",
        "the number of odd elements 3 in the string is 3",
        "the number of odd elements 2 in the string is 2"
    };
    
    if (output == expected) {
        cout << "All tests passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }
    
    return 0;
}