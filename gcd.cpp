#include <vector>
#include <iostream>
#include <string>

using namespace std;

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Function to find all indices where target string appears in text
vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while ((start += target.length()) <= text.length()) {
        if (text.substr(start - target.length(), target.length()).compare(target) == 0) {
            indices.push_back(start);
            start += target.length();
        } else {
            start++;
        }
    }
    
    return indices;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;

    vector<int> result = findIndices(text, target);

    for (int i : result)
        cout << i << " ";
    cout << endl;

    return 0;
}