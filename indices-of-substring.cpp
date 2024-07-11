#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while ((int)start + (int)target.size() <= (int)text.size()) {
        if (text.substr(start, target.size()).compare(target) == 0) {
            indices.push_back(start);
            start += target.size();
        } else {
            start++;
        }
    }
    
    return indices;
}

int main() {
    string text;
    int n;
    cin >> text >> n;
    vector<int> indices = findIndices(text, text.substr(0, n));
    for (int i: indices) {
        cout << i << " ";
    }
    return 0;
}