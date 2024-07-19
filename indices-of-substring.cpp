#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
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
    string input;
    getline(cin, input);
    istringstream iss(input);
    string text, target;
    iss >> text >> target;
    
    vector<int> res = indicesOfSubstring(text, target);
    for (int i : res)
        cout << i << " ";
    return 0;
}