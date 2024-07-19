```cpp
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;

std::vector<int> indicesOfSubstring(string text, string target) {
    std::vector<int> result;
    int pos = 0;
    while ((pos = text.find(target)) != std::string::npos) {
        result.push_back(pos);
        pos += 1; // Move the starting position forward to search for next occurrence
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    cin.ignore(); 
    cin.ignore(); 
    std::vector<int> res = indicesOfSubstring(text, target);
    for (int i : res)
        cout << i << " ";
    return 0;
}