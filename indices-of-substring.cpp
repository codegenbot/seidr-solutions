```c
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;

std::pair<std::string, std::vector<int>> indicesOfSubstring(string text, string target) {
    int n = text.length();
    int m = target.length();

    for(int i=0; i<n-m+1; i++){
        if(text.substr(i,m) == target){
            return {text, {i}};
        }
    }

    return {"", {}};
}

int main() {
    string text, target;
    cin >> text >> target;
    cin.ignore(); // Consume first newline
    cin.ignore(); // Consume second newline
    std::pair<std::string, std::vector<int>> res = indicesOfSubstring(text, target);
    cout << "Text: " << res.first << endl;
    for (int i : res.second)
        cout << i << " ";
    return 0;
}