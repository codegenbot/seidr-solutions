#include <iostream>
#include <string>

using namespace std;

bool issame(vector<string> a) {
    if (a.size() != 1) {
        return false;
    }
    string str = tolower(a[0]);
    for (int i = 1; i < num; i++) {
        string temp;
        cin >> temp;
        if (tolower(temp) != str) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    vector<string> strings;
    for (int i = 0; i < num; i++) {
        string str1, str2;
        cin >> str1 >> str2;
        if (issame({{str1}})) { 
            cout << "The strings are the same." << endl;
        } else {
            cout << "The strings are not the same." << endl;
        }
    }
    return 0;
}