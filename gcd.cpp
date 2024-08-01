#include <vector>
using namespace std;

vector<int> substringIndices(string text, string target) {
    vector<int> indices;
    int targetLen = target.length();
    for (int i = 0; ; i++) {
        int j = 0;
        while (j < targetLen && i + j < text.length() && text[i+j] == target[j]) {
            j++;
        }
        if (j < targetLen) break;
        indices.push_back(i);
    }
    return indices;
}

int main() {
    int a, b; // Two integers
    cin >> a >> b;
    cout << __gcd(a,b) << endl;

    string text, target; // Text and Target strings
    cin >> text >> target;
    vector<int> result = substringIndices(text, target);
    for(int i : result)
        cout<<i<<" ";
    return 0;
}