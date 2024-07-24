#include <iostream>
#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        float temp;
        cin >> temp;
        lst.push_back(temp);
    }

    float odd_sum = 0;
    long long result = double_the_difference(lst);

    cout << "The sum of squares of even numbers is: " << result << endl;

    return 0;
}