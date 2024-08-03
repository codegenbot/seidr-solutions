#include <string>
#include <algorithm>

using namespace std;

string compare_one(string a, string b) {
    if (a > b)
        return a;
    else if (b > a)
        return b;
    else
        return "None";
}

int main() {
    // Read input from user
    cout << "Enter the first string: ";
    string str1;
    cin >> str1;

    cout << "Enter the second string: ";
    string str2;
    cin >> str2;

    // Call the function and print output
    string result = compare_one(str1, str2);
    cout << "The greater string is: " << result << endl;

    return 0;
}