#include <vector>
using namespace std;

vector<int> substringIndices(string text, string target) {
    vector<int> indices;
    int len = text.length();
    int tarLen = target.length();

    for (int i = 0; ; i++) {
        if (i + tarLen > len)
            break;

        int j = 0;
        while (j < tarLen && text[i + j] == target[j])
            j++;

        if (j == tarLen) {
            indices.push_back(i);
            i += j;
        } else
            i++;
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
    int num1, num2;
    cin >> num1 >> num2;

    vector<int> indices = substringIndices("text", "target");
    cout << indices.size() << endl;

    cout << gcd(num1, num2) << endl;

    return 0;
}