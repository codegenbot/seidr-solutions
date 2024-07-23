#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    while(index <= (text.size() - target.size())) {
        bool found = true;
        for(int i = 0; i < target.size(); i++) {
            if(text[index + i] != target[i]) {
                found = false;
                break;
            }
        }
        if(found) {
            result.push_back(index);
            index += target.size();
        } else {
            index++;
        }
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    for(int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}