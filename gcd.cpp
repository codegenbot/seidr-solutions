#include <algorithm>
using namespace std;

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    cin >> target;
    target.pop_back();  // remove the newline character
    vector<int> indices = indicesOfSubstring(text, target);

    int max_gcd = *min_element(indices.begin(), indices.end());
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of indices: " << max_gcd << endl;

    return 0;
}