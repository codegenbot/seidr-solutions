```cpp
#include <string>
#include <cassert> 
using namespace std;

int how_many_times(const string& str, const string& substring) {
    int count = 0;
    size_t pos = 0;
    string s(str); 
    while ((pos = s.find(substring)) != string::npos) {
        count++;
        s.erase(pos, substring.length());
    }
    return count;

}

int main() {
    string str, substring;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter a substring: ";
    cin >> substring;
    
    int result = how_many_times(str, substring);
    cout << "The substring appears " << result << " times.\n";
}