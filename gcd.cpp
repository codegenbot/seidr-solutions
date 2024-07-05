#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    cout << gcd(48, 18);  
    // No need to change the code here

    string text = "Hello, World!";
    string target = "o";
    
    vector<int> indices;

    size_t pos = 0;
    while ((pos = text.find(target)) != string::npos) {
        indices.push_back(pos);
        text.erase(pos, target.length());
    }

    for (int i : indices) {
        cout << i << endl;
    }

    return 0;
}