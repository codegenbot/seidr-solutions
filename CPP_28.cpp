#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string concatenate(const vector<string>& strings){
    string result = "";
    for (const string& s : strings) {
        result += s;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    string concatenatedString = concatenate(strings);
    cout << concatenatedString << endl;

    return 0;
}