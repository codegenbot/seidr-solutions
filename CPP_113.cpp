#include <vector>
#include <string>

bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        string str = lst[i];
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + " in the string " + to_string(i+1) + " of the input.");
    }
    return result;
}

int main() {
    assert(isSame(odd_count({"271", "137", "314"}), {"the number of odd elements 2 in the string 1 of the input.", "the number of odd elements 1 in the string 2 of the input.", "the number of odd elements 0 in the string 3 of the input."}));
    return 0;
}