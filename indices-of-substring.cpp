#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text, target;
    cin >> text;
    cin.ignore(std::streamsize::max, '\n');
    getline(cin, target);
    cin.ignore(); 
    vector<int> res = indicesOfSubstring(text, target);
    for (int i : res)
        cout << i << " ";
    return 0;
}