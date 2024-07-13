#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    int textLength = text.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        bool isMatch = true;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                isMatch = false;
                break;
            }
        }

        if (isMatch) {
            indices.push_back(i);
        }
    }

    return indices;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    vector<int> indices = findIndices("Hello World", "World");
    for (int i : indices) {
        cout << i << endl;
    }
    
    cout << gcd(num1, num2) << endl;

    return 0;
}