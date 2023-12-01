#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0){
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.0, 3.0, 4.5};
    long long odd_sum = 19;
    assert(double_the_difference(lst) == odd_sum);
    
    cout << "Test passed." << endl;
    
    return 0;
}