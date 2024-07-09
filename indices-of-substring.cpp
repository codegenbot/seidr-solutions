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
        for(int j = 0; j < m; j++) {
            if(text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if(match) {
            result.push_back(make_pair(i,1));
        }
    }

    return result;
}

int main() {
    string text = "hello world";
    string target = "world";
    vector< pair<int,int> > result = indicesOfSubstring(text, target);
    for (auto it : result) {
        cout << it.first << endl; 
    }
    return 0;
}