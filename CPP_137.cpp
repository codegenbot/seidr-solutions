#include <iostream>
#include <string>

using namespace std;

int compare_strings(const string& a, const string& b) {
    for (size_t i = 0; i < a.size() && i < b.size(); ++i) {
        if (a[i] > b[i])
            return -1;
        else if (a[i] < b[i])
            return 1;
    }
    if (a.size() > b.size())
        return -1;
    else if (a.size() < b.size())
        return 1;
    return 0;
}

int main() {
    string a, b;
    cout << "Enter the first string: ";
    cin >> a;
    cout << "Enter the second string: ";
    cin >> b;
    int result = compare_strings(a, b);
    if (result < 0)
        cout << "The first string is smaller." << endl;
    else if (result > 0)
        cout << "The second string is smaller." << endl;
    else
        cout << "Both strings are equal." << endl;
    return 0;
}