```cpp
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
    cout << "Enter two strings: ";
    cin >> str1 >> str2;
    int result = how_many_times(str1, str2);
    cout << "The strings appear " << result << " times.\n";
    return 0;
}