#include <vector>
#include <iostream>
using namespace std;

vector<int> lps(string target) {
    vector<int> result(0);
    int length = 0;
    for(int i = 1; i < target.size(); i++) {
        while(length > 0 && target[i] != target[result[0]]) {
            length = result[0];
            result.erase(result.begin());
        }
        if(target[i] == target[0]) {
            length++;
            result.push_back(i);
        }
    }
    return result;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> lpsArray = lps(target);
    vector<int> result;
    for(int i = 0; i <= text.size() - target.size(); i++) {
        int j = 0;
        while(j < target.size()) {
            if(text[i+j] != target[j]) {
                if(j > lpsArray[0]) {
                    i = i + (j - lpsArray[0]);
                    j = 0;
                } else {
                    break;
                }
            }
            j++;
        }
        if(j == target.size()) result.push_back(i);
    }
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for(int i: res) cout << i << " ";
    return 0;
}