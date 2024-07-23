#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int last = 0; 
    while (last < text.length()) {
        int pos = text.find(target, last); 
        if (pos != string::npos) {
            indices.push_back(pos);
            last = pos + target.length(); 
        } else break; 
    }
    return indices;
}

int main() {
    string text;
    cin >> text;

    string target;
    cin >> target;

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}