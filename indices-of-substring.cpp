```c++
#include <iostream> 
#include <vector>
#include <string>
using namespace std;

// Declare the function before using it
vector<int> indicesOfSubstring(string text, string target);

int main() {
    vector<int> result = indicesOfSubstring("hello world", "world");
    for (int i : result) {
        cout << i << endl; 
    }
    return 0;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++) {
        if(text.substr(i,m) == target) {
            result.push_back(i);
        }
    }

    return result;
}