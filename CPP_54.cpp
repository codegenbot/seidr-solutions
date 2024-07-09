#include <iostream>
using namespace std;

bool same_chars(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for(int i = 0; i < s1.size(); i++){
        bool match = true;
        int j = 0;
        while(j < s1.size() && j+i < s1.size() && s1[j+i] == s1[i]) {
            if(s2[j] != s1[i]) {
                match = false;
                break;
            }
            j++;
        }
        if(!match) return false;
    }
    return true;

}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    if (same_chars(s1, s2)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}