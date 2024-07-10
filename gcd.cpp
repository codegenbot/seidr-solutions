#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textSize = text.length();
    int targetSize = target.length();

    for (int i = 0; ; i++) {
        if (i + targetSize > textSize)
            break;

        int j = 0;
        while (j < targetSize && text[i + j] == target[j])
            j++;

        if (j == targetSize) {
            result.push_back(i);
            i += j - 1; // to skip the matched characters
        } else
            i++;
    }

    return result;
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
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result)
        cout << i << " ";
    cout << endl;

    return 0;
}