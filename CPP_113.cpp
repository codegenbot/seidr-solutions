#include <iostream>
#include <vector>

using namespace std;

vector<string> countOddElements(vector<string> lst) {
    vector<string> result;
    for (string str : lst) {
        int oddCount = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        result.push_back("The number of odd elements " + to_string(oddCount) + " in the string \"" + str + "\" of the input.");
    }
    return result;
}

int main() {
    vector<string> input = {"271", "137", "314"};
    vector<string> output = countOddElements(input);
    for (string s : output) {
        cout << s << endl;
    }
    return 0;
}