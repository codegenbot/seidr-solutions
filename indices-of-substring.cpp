#include <vector>
#include <string>
#include <iostream> 

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++) {
        int j = 0;
        if(i >= m - 1 && text.substr(i,j) == target) {
            while((i+j) <= n) {
                if(text.substr(i,j) != target)
                    break;
                result.push_back(i);
                j++;
            }
        }
    }

    return result;
}

int main() {
    vector<int> result = indicesOfSubstring("hello world", "world");
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}