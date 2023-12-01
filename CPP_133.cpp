#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int sum_squares(vector<float> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        sum += ceil(lst[i]) * ceil(lst[i]);
    }
    return sum;
}

int main() {
    vector<float> lst = {1, 2, 3};
    cout << sum_squares(lst) << endl;
    
    lst = {1, 4, 9};
    cout << sum_squares(lst) << endl;
    
    lst = {1, 3, 5, 7};
    cout << sum_squares(lst) << endl;
    
    lst = {1.4, 4.2, 0};
    cout << sum_squares(lst) << endl;
    
    lst = {-2.4, 1, 1};
    cout << sum_squares(lst) << endl;
    
    return 0;
}