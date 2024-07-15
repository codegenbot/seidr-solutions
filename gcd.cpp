#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int target_len = target.length();
    for(int i = 0; i <= text.length() - target_len; i++) {
        bool found = true;
        for(int j = 0; j < target_len; j++) {
            if(text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            indices.push_back(i);
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    
    while(true) {
        cin >> a >> b;
        if(a <= INT_MAX && b <= INT_MAX) break;
        cout << "Error: Input values are too large. Please enter values that fit within the range of an integer.\n";
    }
    cout << std::endl;
    cout << gcd(a, b) << std::endl;

    string text, target;
    
    while(true) {
        cin >> text >> target;
        if(text.length() <= INT_MAX && target.length() <= INT_MAX) break;
        cout << "Error: Input values are too large. Please enter values that fit within the range of an integer.\n";
    }
    vector<int> indices = findIndices(text, target);
    for(int i : indices)
        cout << i << " ";
    return 0;
}