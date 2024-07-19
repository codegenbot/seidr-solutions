#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars_lst1 = total_chars(lst1);
    int total_chars_lst2 = total_chars(lst2);

    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    vector<string> lst1 = {"apple", "banana", "cherry"};
    vector<string> lst2 = {"orange", "mango", "papaya"};

    vector<string> result = total_match(lst1, lst2);

    vector<string> expected_result = total_chars(lst1) < total_chars(lst2) ? lst1 : lst2;

    if (issame(result, expected_result)) {
        cout << "Test case passed" << endl;
    } else {
        cout << "Test case failed" << endl;
    }

    return 0;
}