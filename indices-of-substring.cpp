```c
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;

std::vector<std::size_t> indicesOfSubstring(string text, string target) {
    std::vector<std::size_t> result;
    std::size_t n = text.length();
    std::size_t m = target.length();

    for(std::size_t i=0; i<=n-m; ++i){
        if(text.substr(i,m) == target){
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    cin.ignore(); 
    cin.ignore(); 
    std::vector<std::size_t> res = indicesOfSubstring(text, target);
    for (std::size_t i : res)
        cout << i << " ";
    return 0;
}