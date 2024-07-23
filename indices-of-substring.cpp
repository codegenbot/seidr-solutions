#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for(int i = 0; i <= text.length() - target.length(); i++){
        if(text.substr(i, target.length()).compare(target) == 0)
            result.push_back(i);
    }
    return result;
}

int main() {
    int num;
    string text;
    cin >> num;
    for(int i = 0; i < num; i++){
        cin.ignore();
        getline(cin, text);
        vector<int> res = indicesOfSubstring(text, text);
        for(auto x : res)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}