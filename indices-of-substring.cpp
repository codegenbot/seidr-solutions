#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int i = 0;
    while ((i = text.find(target)) != string::npos) {
        indices.push_back(i);
        i += target.size();
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