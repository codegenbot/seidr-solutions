#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; ++i) {
        bool match = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            indices.push_back(i);
        }
    }

    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;

    vector<int> result = findIndices(text, target);

    for (int i : result)
        cout << i << " ";

    return 0;
}