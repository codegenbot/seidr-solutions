#include <iostream>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst; 
    int odd_sum = 0;
    
    float num;
    cout << "Enter numbers. Type 'stop' to finish input.\n";
    while (true) {
        cin >> num;
        if (!cin || !std::isfinite(num)) break;
        if (num > 0) odd_sum += num * num;
        else if (num < 0) break;
        lst.push_back(num);
    }

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}