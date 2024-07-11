#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for(float x : lst) {
        if(x > 0 && (int)x == x) { 
            if((int)x % 2 != 0) { 
                sum += pow((int)x, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        float x;
        cin >> x;
        lst.push_back(x);
    }

    cout << "The difference is: " << double_the_difference(lst) << endl;

    return 0;
}