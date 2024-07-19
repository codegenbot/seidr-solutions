#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;

std::vector<int> indicesOfSubstring(string text, string target) {
    std::vector<int>();

    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++){
        size_t pos = text.find(target);
        if(pos != string::npos){
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    cin.ignore(); 
    cin.ignore(); // Consume second newline
    std::vector<int> res = indicesOfSubstring(text, target);
    for (int i : res)
        cout << i << " ";
    return 0;
}