```c++
#include <vector>
#include <string>

using namespace std;

int main() {
    string text = "hello";
    string target = "ll";

    vector<int> indices = indicesOfSubstring(text, target);

    for (auto i : indices) {
        cout << i << " ";
    }

    cout << endl;

    int a = 10;
    int b = 15;

    int result = gcd(a, b);

    cout << "GCD of " << a << " and " << b << " is " << result << endl;

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