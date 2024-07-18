#include <string>

bool issame(vector<string> lst1, vector<string> lst2) {
    int total_chars1 = 0;
    for (string str : lst1) {
        total_chars1 += str.length();
    }

    int total_chars2 = 0;
    for (string str : lst2) {
        total_chars2 += str.length();
    }

    if (total_chars1 == total_chars2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    vector<string> lst1 = {"apple", "banana", "cherry"};
    vector<string> lst2 = {"orange", "pear"};

    int total_match = 0;

    if (issame(lst1, lst2)) {
        cout << "Total characters match." << endl;
        total_match++;
    } else {
        cout << "Total characters do not match." << endl;
    }

    return 0;
}