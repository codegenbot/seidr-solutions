#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for(int i=0; i<=text.length()-target.length(); i++){
        bool found = true;
        for(int j=0; j<target.length(); j++){
            if(text[i+j] != target[j]){
                found = false;
                break;
            }
        }
        if(found) result.push_back(i);
    }
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for(int i : indices){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}