#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m + 1; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (j > 0 && text[i + j - 1] != target[j - 1]) {
                found = false;
                break;
            }
        }
        if (found) indices.push_back(i);
    }

    return indices;
}

int main() {
    int n;
    cin >> n;
    string text, target;
    cin >> text >> target;

    vector<int> result = findIndices(text, target);

    for(int i : result)
        cout << i << " ";
    
    return 0;
}