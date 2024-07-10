#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLen = target.length();
    for(int i=0; i<=text.length()-targetLen; i++) {
        bool found = true;
        for(int j=0; j<targetLen; j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            indices.push_back(i);
            i += (targetLen - 1); // skip the overlapping part
        }
    }
    return indices;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}