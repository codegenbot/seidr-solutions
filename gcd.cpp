```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int length = target.length();
    for(int i=0; i<=text.length()-length; i++) {
        if(text.substr(i, length) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    vector<int> indices;
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    getline(cin, target);
    
    vector<int> result = findIndices(text, target);
    for(int i : result)
        cout << i << " ";
    
    cout << "\nThe GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    
    return 0;
}