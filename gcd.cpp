#include <vector>
using namespace std;

vector<int> findSubstring(string text, string target) {
    int m = text.length(), n = target.length();
    vector<int> result;
    
    for (int i = 0; i <= m - n; i++) {
        bool found = true;
        for (int j = 0; j < n; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        
        if (found) {
            result.push_back(i);
            
            // Check the remaining part of the text
            for (int i2 = i + n; i2 < m; i2 += n) {
                found = true;
                for (int j = 0; j < n; j++) {
                    if (text[i2 + j] != target[j]) {
                        found = false;
                        break;
                    }
                }
                
                if (!found)
                    break;
            }
        }
    }
    
    return result;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << *max_element(gcd(num1, num2), gcd(num2, num1)) << endl;
}