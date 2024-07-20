```cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> indicesOfSubstring(string text, string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++){
        if(text.find(target)!=string::npos){
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);
    std::vector<int> res = indicesOfSubstring(text, target);
    for (int i : res)
        cout << i << " ";
    return 0;
}