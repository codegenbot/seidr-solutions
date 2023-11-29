#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst);

bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int oddCount = 0;
        for (int j = 0; j < lst[i].size(); j++) {
            if ((lst[i][j] - '0') % 2 != 0) {
                oddCount++;
            }
        }
        string mystr = "the number of odd elements %d in the string %d of the input.";
        result.push_back(mystr);
    }
    return result;
}

int main() {
    assert(isSame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 1 of the input.",
        "the number of odd elements 2 in the string 2 of the input.",
        "the number of odd elements 2 in the string 3 of the input."
    }));
    return 0;
}