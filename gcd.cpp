#include <vector>
using namespace std;

vector<int> substringIndices(string text, string target) {
    vector<int> result;
    int j = 0; // index of target in text

    while (j <= text.length() - target.length()) {
        int i = 0; // index of current match
        for (; i < target.length(); i++) {
            if (text[j + i] != target[i]) break;
        }
        if (i == target.length()) result.push_back(j);
        j++;
    }

    return result;
}

int main() {
    int a, b; // input values
    cin >> a >> b;

    cout << __gcd(a, b) << endl; // use gcd function to find the largest integer that divides both numbers

    string text, target; // input strings
    cin >> text >> target;

    vector<int> indices = substringIndices(text, target);
    for (int index : indices)
        cout << index << " ";
    cout << endl;
    return 0;
}

long long gcd(long long a, long long b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}