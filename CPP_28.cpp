```cpp
#include <vector>
#include <string>

using namespace std;

std::string concatenate(vector<string> strings) {
    string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;

int main() {
    vector<string> strings;
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    
    for(int i=0; i<n; i++) {
        string s;
        cout << "Enter string " << i+1 << ": ";
        getline(cin, s);
        strings.push_back(s);
    }
    
    std::string output = concatenate(strings);
    cout << "Concatenated string: " << output << endl;
    
    return 0;
}