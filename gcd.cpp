#include <vector>
#include <iostream>

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
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int result = gcd(num1, num2);
    vector<int> indices = findIndices("Hello World Hello", "Hello");
    
    cout << "GCD of the two numbers is: " << result << endl;
    cout << "Indices at which 'Hello' appears in the string are: ";
    for(int i: indices) {
        cout << i << " ";
    }
    return 0;
}