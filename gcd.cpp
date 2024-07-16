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
    int a = 48;
    int b = 18;
    cout << "GCD of " << a << " and " << b << " is " << findGCD(a, b) << endl;
    
    string text = "banana";
    string target = "ana";
    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << "Target string found at index " << i << endl;
    }
    return 0;
}