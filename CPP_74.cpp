#include <iostream>
#include <vector>
#include <cassert>

int countTotalChars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2);

int main() {
    // Your main function code here
    return 0;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars_lst1 = countTotalChars(lst1);
    int total_chars_lst2 = countTotalChars(lst2);
    
    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}