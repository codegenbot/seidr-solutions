#include <vector>
#include <string>

int odd_count(string s) {
    int oddCount = 0;
    for (char c : s) {
        if ((c - '0') % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount;
}

vector<string> generate_output(vector<string> lst) {
    vector<string> result;
    for (string str : lst) {
        int oddCount = odd_count(str);
        string newStr = "the number of odd elements " + to_string(oddCount) + " in the string " + str + " of the input.";
        result.push_back(newStr);
    }
    return result;
}

int main() {
    assert (issame(generate_output({"271", "137", "314"}), {
        "the number of odd elements 1 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
}