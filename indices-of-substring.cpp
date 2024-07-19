#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++){
        for(int j=0; j<=m-1; j++){
            if(text.substr(i,j+1) == target){
                result.push_back(i);
                break;
            }
        }
    }

    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for(int i:res)
        cout << i << " ";
    return 0;
}