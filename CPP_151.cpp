#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<float> lst;
    long long odd_sum = 0;
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        float x;
        cin >> x;
        lst.push_back(x);
    }
    
    odd_sum = double_the_difference(lst);

    cout << odd_sum << endl;

    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            if (x % 2 != 0) { 
                sum += pow(x, 2);
            }
        }
    }
    return sum;
}