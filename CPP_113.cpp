#include <vector>
#include <string>
#include <cassert>

vector<string> odd_count(vector<string> input);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> odd_count(vector<string> input) {
    vector<string> result;
    for (int i = 0; i < input.size(); ++i) {
        int count = 0;
        for (int j = 0; j < input[i].size(); ++j) {
            if ((input[i][j] - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + to_string(i + 1) + " of the input.");
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {"the number of odd elements 2 in the string 1 of the input.", "the number of odd elements 2 in the string 2 of the input.", "the number of odd elements 2 in the string 3 of the input."}));
}