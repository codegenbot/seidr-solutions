#include <vector>
#include <string>

using namespace std;

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

int main() {
    string text = "Hello world hello";
    string target = "hello";
    vector<int> indices = indicesOfSubstring(text, target);

    cout << "Indices: ";
    for(int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    int a = 12;
    int b = 15;
    int g = gcd(a, b);
    cout << "GCD of " << a << " and " << b << ": " << g << endl;

    return 0;
}