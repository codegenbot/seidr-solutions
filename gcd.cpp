#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for(int i = 0; i <= text.length() - targetLength; i++) {
        bool found = true;
        for(int j = 0; j < targetLength; j++) {
            if(text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
            indices.push_back(i);
        }
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
    vector<int> indices;
    string text, target;
    cin.ignore();
    getline(cin, text);
    cin.ignore();
    getline(cin, target);
    indices = findIndices(text, target);
    cout << indices.size() << endl;
    for(int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << gcd(a, b) << endl;
    return 0;
}