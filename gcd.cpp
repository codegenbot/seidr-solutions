#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    
    for(int i=0; i<=n-m; i++) {
        bool found = true;
        for(int j=0; j<m; j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) result.push_back(i);
    }
    
    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for(int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}