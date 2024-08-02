#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return "None";
}

int main() {
    // Read input from user
    cout << "Enter two strings: ";
    string s1, s2;
    cin >> s1 >> s2;

    // Call the function and print the output
    string result = compare_one(s1, s2);
    cout << "Result: " << result << endl;

    return 0;
}