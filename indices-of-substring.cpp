#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int lastFound = -1; // previous index where target was found
    
    for (int i = 0; i <= text.size() - target.size(); i++) { // iterate through the text
        if (text.substr(i, target.size()) == target) { // check if the current substring is equal to the target
            indices.push_back(i); // add the index to the list
            lastFound = i;
        }
    }
    
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text, target;
    getline(cin, text);
    for (int i = 0; i < n; i++) {
        getline(cin, target);
        vector<int> result = findIndices(text, target);
        for (int num : result) {
            cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}