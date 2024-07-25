#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int length = target.length();
    
    for(int i = 0; i <= text.length() - length; i++) {
        if(text.substr(i, length) == target) {
            result.push_back(i);
            while(i + length < text.length() && text.substr(i, length) == target) {
                i++;
                i += length;
            }
        }
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
    int num1, num2;
    cin >> num1 >> num2;

    cout << gcd(num1, num2) << endl;

    string text, target;
    cin >> text >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    for(int i : indices)
        cout << i << " ";

    return 0;
}