#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    if (a > b)
        return a;
    else if (b > a)
        return b;
    else
        return "Both strings are equal";
}

int main() {
    // Input from user
    cout << "Enter two strings: ";
    string str1, str2;
    cin >> str1 >> str2;

    // Call the function and print the result
    string result = compare_one(str1, str2);
    cout << "The comparison result is: " << result << endl;

    return 0;
}