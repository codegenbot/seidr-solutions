#include <string>

using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        str.erase(pos, substring.length());
    }
    return count;

int main() {
    string inputStr, subStr;
    cout << "Enter a string: ";
    getline(cin, inputStr);
    cout << "Enter a substring: ";
    getline(cin, subStr);
    int result = how_many_times(inputStr, subStr);
    cout << "The substring appears " << result << " times in the given string." << endl;
    return 0;
}