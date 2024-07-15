```cpp
#include <vector>
#include <string>
#include <iostream> 

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=1; i<=n-m; i++) {
        if(text.find(target, i) != string::npos) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    vector<int> result = indicesOfSubstring("}{:'z*C.{=", "{");
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}