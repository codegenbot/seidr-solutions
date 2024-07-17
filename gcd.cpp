#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();

    for (int i = 0; ; i++) {
        if (i + targetLen > textLen) break;

        bool found = true;
        for (int j = 0; j < targetLen; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }

        if (found) indices.push_back(i);
    }

    return indices;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}