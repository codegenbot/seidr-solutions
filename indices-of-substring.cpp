#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    // Your code here
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> result = indicesOfSubstring(text, target);

    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}