#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += target.length(); // increment position to avoid duplicate matches
    }
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> res = indicesOfSubstring(text, target);

    for(auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}