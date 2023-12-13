#include <iostream>
#include <string>

using namespace std;

bool is_nested(string str) {
    int count = stoi(str);
    return count % 2 == 1;
}

int main() {
    string str = "[[]]]]]]][[[[[]";
    cout << is_nested(str) << endl;
    return 0;
}