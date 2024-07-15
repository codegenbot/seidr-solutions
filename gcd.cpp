```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int target_len = target.length();
    for(int i = 0; i <= text.length() - target_len; i++) {
        bool found = true;
        for(int j = 0; j < target_len; j++) {
            if(text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) {
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
    cin >> a >> b;
    cout << std::endl;
    
    // Check if the values of a and b are within the limits.
    // If not, ask for valid input from the user.
    while(a > INT_MAX/b) {
        cout << "Invalid input. Please enter a number that does not exceed the maximum limit." << endl;
        cin >> a >> b;
    }
    
    cout << gcd(a, b) << std::endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = findIndices(text, target);
    for(int i : indices)
        cout << i << " ";
    return 0;
}