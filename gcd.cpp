#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int pos = 0;
    while (true) {
        pos = text.find(target, pos);
        if (pos == string::npos)
            break;
        indices.push_back(pos);
        pos += target.length();
    }
    return indices;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for (auto i : result)
        cout << i << " ";
    cout << endl;
    return 0;
}