#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    string text = "ABC1234";
    string target = "23";
    
    vector<int> result = indicesOfSubstring(text, target);
    cout << "[";
    for(int i=0; i<result.size();i++) {
        if(i != 0) 
            cout << ", ";
        cout << result[i];
    }
    cout << "]";

    long long a = 12;
    long long b = 8;
    
    long long answer = gcd(a, b);
    cout << endl << "GCD of " << a << " and " << b << " is: " << answer;

    return 0;
}