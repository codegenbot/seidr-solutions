#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::istringstream;

std::vector<int> indicesOfSubstring(string text, string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<n-m+1; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string input, text, target;
    getline(cin, input);
    istringstream iss(input);
    iss >> text >> target;
    
    std::vector<int> res = indicesOfSubstring(text, target);
    for (int i : res)
        cout << i << " ";
    return 0;
}