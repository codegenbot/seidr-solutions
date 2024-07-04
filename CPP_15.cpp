#include <iostream>
#include <string>
using namespace std;

string string_sequence(int n) {
    string result = "";
    for (int i = 0; i <= n; ++i) {
        if (i > 0) result += " ";
        result += to_string(i);
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    cout << string_sequence(n) << endl;
    return 0;
}