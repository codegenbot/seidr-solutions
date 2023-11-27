#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (int j = 0; j < lst[i].size(); j++) {
            if ((lst[i][j] - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + to_string(i + 1) + " of the input.");
    }
    return result;
}

int main() {
    assert(odd_count({ "271", "137", "314" }) == vector<string>{ "the number of odd elements 1 in the string 1 of the input.", "the number of odd elements 2 in the string 2 of the input.", "the number of odd elements 2 in the string 3 of the input."});
    return 0;
}