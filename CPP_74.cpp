#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b);

vector<string> total_match(vector<string> lst1, vector<string> lst2);

bool issame(vector<string> a, vector<string> b) {
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

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for (string str : lst1) {
        totalChars1 += str.length();
    }
    
    for (string str : lst2) {
        totalChars2 += str.length();
    }
    
    if (totalChars1 < totalChars2) {
        return lst1;
    }
    else {
        return lst2;
    }
}

int main() {
    // Test cases
    vector<string> lst1 = {"apple", "banana", "cherry"};
    vector<string> lst2 = {"apple", "banana", "cherry"};
    
    if (issame(lst1, lst2)) {
        cout << "Lists are the same" << endl;
    }
    else {
        cout << "Lists are different" << endl;
    }
    
    vector<string> result = total_match(lst1, lst2);
    
    cout << "Result: ";
    for (string str : result) {
        cout << str << " ";
    }
    cout << endl;
    
    return 0;
}