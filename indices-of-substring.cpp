#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.length();
    
    for(int i=0; i<=text.length()-len; i++){
        if(text.substr(i,len) == target){
            result.push_back(i);
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