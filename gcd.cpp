#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    while (index <= text.length() - target.length()) {
        index = text.find(target, index);
        if (index == string::npos) break;
        result.push_back(index);
        index += target.length();
    }
    return result;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices)
        cout << i << " ";
    cout << endl;

    return 0;
}