```cpp
#include <iostream>
#include <string>
using namespace std;

int how_many_times(string str1, string str2) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str1.find(str2, pos)) != string::npos) {
        ++count;
        pos += str2.size();
    }
    return count;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    cout << "The second string appears " << how_many_times(str1, str2) << " times in the first string." << endl;
    return 0;