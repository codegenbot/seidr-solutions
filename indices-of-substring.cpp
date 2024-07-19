#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;

std::vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++){
        if(text.find(target.c_str(), i) != string::npos){
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    std::vector<int> res = indicesOfSubstring(text, target);
    for (int i : res)
        cout << i << " ";
    return 0;
}