```cpp
#include <string>
#include <vector>
using namespace std;

string longest(vector<string> strings) {
    if(strings.empty()) return "";
    string result = strings[0];
    for(auto s : strings) {
        if(s.length() > result.length()) result = s;
    }
    return result;
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry"};
    cout << longest(strings) << endl;
    return 0;
}