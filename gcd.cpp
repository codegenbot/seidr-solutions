Here is the modified code:

```c++
#include <vector>
#include <string>

using namespace std;

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target string: ";
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);

    int a, b;
    cout << "Enter two integers for gcd: ";
    cin >> a >> b;

    int result = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is " << result << endl;

    cout << "Indices where target appears in the text are: ";
    for(int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
            while(i + m < n && text.substr(i,m) == target){
                i++;
                result.push_back(i);
            }
        }
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}