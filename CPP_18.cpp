```cpp
#include <string>
#include <iostream>

using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        str.erase(pos, substring.length());
    }
    return count;
}

int main()
{
    string str, substring;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the substring: ";
    getline(cin, substring);
    int result = how_many_times(str, substring);
    cout << "The substring appears " << result << " times." << endl;
    return 0;
}