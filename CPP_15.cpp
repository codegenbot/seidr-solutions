#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string string_sequence(int n) {
    string result = "";
    for(int i=0; i<=n; i++){
        result += to_string(i) + " ";
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    assert (string_sequence(n) == "0 1 2 3 4 5 6 7 8 9 10");

    return 0;
}