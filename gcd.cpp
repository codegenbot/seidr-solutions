#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int pos = 0;
    while ((pos = text.find(target)) != string::npos) {
        indices.push_back(pos);
        pos += target.length();
    }
    return indices;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for(int i: result) cout << i << " ";
    return 0;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}