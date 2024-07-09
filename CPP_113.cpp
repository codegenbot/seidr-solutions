#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        string temp = "the number of odd elements " + to_string(count) + " in the str" + to_string(i+1) + " of the input.";
        result.push_back(temp);
    }
    return result;
}

int main() {
    assert(issame(odd_count({"271", "137", "314"}) , {"the number of odd elements 2 in the str1 of the input.", "the number of odd elements 1 in the str2 of the input.", "the number of odd elements 1 in the str3 of the input."}) );
    return 0;
}