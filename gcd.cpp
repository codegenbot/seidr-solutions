```cpp
#include <vector>
#include <string>
using namespace std;

vector<int> findIndices(std::string text, std::string target) {
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
    int a; // input from user
    int b; // input from user
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;

    string text; // input from user
    string target; // input from user
    cout << "Enter the text and target: ";
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for(int i : result)
        cout << i << " ";  // output the indices

    return 0;
}