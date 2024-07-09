```cpp
#include <vector>
#include <string>
#include <pair>
using namespace std;

vector< pair<int,int> > indicesOfSubstring(string text, string target) {
    vector< pair<int,int> > result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++) {
        bool match = true;
        int j = 0;
        while(match && j < m) {
            if(text[i + j] != target[j]) {
                match = false;
            }
            j++;
        }
        if(match) {
            result.push_back(make_pair(i,1));
            i += m - 1; // skip the remaining characters in current string
        }
    }

    return result;
}

int main() {
    string text = "hello world";
    string target = "world";
    vector< pair<int,int> > result = indicesOfSubstring(text, target);
    for (auto it : result) {
        cout << it.first << endl; // or use it.second to print the number of occurrences
    }
    return 0;
}