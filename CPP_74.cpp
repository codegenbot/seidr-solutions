#include <string>

bool issame(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2);

int sum_chars(vector<string> lst) {
    int sum = 0;
    for (string s : lst) {
        sum += s.size();
    }
    return sum;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (sum_chars(lst1) < sum_chars(lst2)) {
        return lst1;
    }
    return lst2;
}

int main() {
    // Main function code goes here
    return 0;
}