#include <vector>
#include <cmath>
#include <string>

using namespace std;

int do_algebra(vector<pair<char, string>> operators_and_operands) {
    int result = stoi(operators_and_opernds[0].second);
    for (const auto& pair : operators_and_opernds) {
        if (pair.first == "+") {
            result += stoi(pair.second);
        } else if (pair.first == "-") {
            result -= stoi(pair.second);
        } else if (pair.first == "*") {
            result *= stoi(pair.second);
        } else if (pair.first == "//") {
            result = result / stoi(pair.second);
        } else if (pair.first == "**") {
            result = pow(result, stoi(pair.second));
        }
    }
    return result;
}

int main() {
    vector<pair<char, string>> operators_and_opernds = {{"+", "7"}, {"*", "3"}, {"**", "4"}};
    cout << do_algebra(operators_and_opernds) << endl;
    return 0;
}