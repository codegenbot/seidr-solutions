#include <vector>
using namespace std;

int luhnAlgorithm(vector<int> cc) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = cc.size() - 1; i >= 0; --i) {
        int digit = cc[i];
        
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        doubleNext = !doubleNext;
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cc(n);
    for (int i = 0; i < n; ++i) {
        cin >> cc[i];
    }
    cout << luhnAlgorithm(cc) << endl;
    return 0;
}