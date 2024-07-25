#include <vector>
using namespace std;

int luhn(vector<int> num) {
    int sum = 0;
    bool alt = false;
    
    for(int i = num.size() - 1; i >= 0; --i) {
        if(alt) {
            num[i] *= 2;
            if(num[i] > 9) 
                num[i] -= 9;
        }
        sum += num[i];
        alt = !alt;
    }
    
    return sum;
}

int main() {
    int n, x;
    vector<int> v;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        cin >> x;
        v.push_back(x);
    }
    
    cout << luhn(v) << endl;
    
    return 0;
}