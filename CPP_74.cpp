#include <string>

int sum_chars(vector<string> lst) {
    int sum = 0;
    for (string s : lst) {
        sum += s.size();
    }
    return sum;
}

bool issame(vector<string> lst1, vector<string> lst2) {
    return sum_chars(lst1) < sum_chars(lst2);
}

vector<string> total_match(vector<string> lst1, vector<string> lst2);

int main() {
    // Main function can use total_match function here
    return 0;
}