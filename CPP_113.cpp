#include <vector>
#include <string>

bool issame(char a, char b) {
    return a == b;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> res;
    for (string s : lst) {
        int count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string output = "The number of odd elements " + to_string(count) + " in the string " + s + " of the input.";
        res.push_back(output);
    }
    return res;
}