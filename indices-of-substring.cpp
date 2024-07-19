```
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;

std::vector<int> indicesOfSubstring(string text, string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for(std::string::size_type i=0; i<=n-m; i++){
        if(text.substr(i,m) == target){
            result.push_back(static_cast<int>(i));
        }
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