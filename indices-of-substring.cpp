```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> res;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m) == target){
            res.push_back(i);
        }
    }

    return res;
}

int main() {
    string text = "example";  // provide example input
    string target = "ex";     // provide example target

    vector<int> result = indicesOfSubstring(text, target);
    cout << "Result: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}