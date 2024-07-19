#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int text_len = text.length();
    int target_len = target.length();

    for (int i = 0; i <= text_len - target_len; i++) {
        bool found = true;
        for (int j = 0; j < target_len; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }

    return result;
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

    vector<int> indices = indicesOfSubstring("Hello World", "ll");

    cout << indices[0] << endl;  // Example usage

    int result_gcd = gcd(num1, num2);

    cout << result_gcd << endl;

    return 0;
}