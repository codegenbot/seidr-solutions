#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::string;

std::vector<int> indicesOfSubstring(string text, string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    if (m == 0) { // target length is 0
        result.push_back(-1); 
        return result;
    }

    for(int i=0; i<n-m+1; i++){
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
    std::vector<int> res = indicesOfSubstring(text, target);
    for (int i : res)
        cout << i << " ";
    return 0;
}