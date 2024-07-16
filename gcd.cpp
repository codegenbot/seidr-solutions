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
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int gcd = findGCD(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd << endl;
    
    string text;
    cout << "Enter a text: ";
    getline(cin, text);

    string target;
    cout << "Enter the target string: ";
    cin >> target;

    vector<int> indices = findIndices(text, target);
    cout << "The target string appears at indices ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}