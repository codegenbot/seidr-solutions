```cpp
#include <iostream>
#include <string>
using namespace std;

int how_many_times(string str1, string str2) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str1.find(str2, pos)) != string::npos) {
        ++count;
        if (pos == string::npos) break;
        str1.erase(0, str2.size());
        pos = str2.size();
    }
    return count;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    if(str2.empty()) {
        cout << "Error: The second string is empty." << endl;
    } else {
        cout << "The second string appears " << how_many_times(str1, str2) << " times in the first string." << endl;
    }
    return 0;