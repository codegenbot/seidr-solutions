```cpp
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

    int n; // number of elements in the list
    cin >> n;

    for(int i = 0; i < n; i++) {
        float x; // read a float number from user input
        cin >> x;
        lst.push_back(x);
    }

    cout << double_the_difference(lst) << endl;

    return 0;
}