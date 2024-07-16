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
    string text = "your_text_string";
    string target = "your_target_string";
    vector<int> indices = findIndices(text, target);
    int result = findGCD(12, 15); 
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD: " << result << endl;
    return 0;
}