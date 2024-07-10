#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i+n-m <= n; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
        }
    }
    
    return result;
}

int main() {
    // Read input
    string text;
    cin >> text;
    
    // Read the length of the target
    int len;
    cin >> len;

    string target(text, 0, len);

    // Call the function and print the output
    vector<int> res = indicesOfSubstring(text, target);
    for(auto i: res) {
        cout << i << " ";
    }
    
    return 0;
}