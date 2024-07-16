```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int targetLength = target.length();
    for (int i = 0; i <= text.length() - targetLength; i++) {
        bool isMatch = true;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            result.push_back(i);
        }
    }
    return result;
}

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << ": " << findGCD(a, b) << endl;
    
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target string: ";
    getline(cin, target);
    vector<int> indices = findIndices(text, target);
    if (indices.empty()) {
        cout << "Target not found in the text." << endl;
    } else {
        cout << "Target found at indices: ";
        for (int index : indices) {
            cout << index << " ";
        }
        cout << endl;
    }
    
    return 0;
}