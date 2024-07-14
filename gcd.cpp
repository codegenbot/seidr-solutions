#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        int j = 0;
        while (j < target.length()) {
            if (text[i + j] != target[j]) {
                break;
            }
            j++;
        }
        if (j == target.length()) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    cin >> target;
    cin.ignore(); 
    vector<int> indices = indicesOfSubstring(text, target);

    int min_index = 0; 

    if (!indices.empty()) { 
        min_index = indices[0];
        for (int i : indices) {
            if (i < min_index) {
                min_index = i;
            }
        }
        cout << "Indices: ";
        for (int i : indices) {
            cout << i << " ";
        }
        cout << endl;
        cout << "GCD of indices: " << min_index << endl;
    }

    return 0;
}