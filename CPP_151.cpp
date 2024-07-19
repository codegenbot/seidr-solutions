#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long doubleTheDifference(vector<double> lst) {
    long long pos_sum = 0, neg_sum = 0;
    for (double n : lst) {
        if (n > 0) {
            pos_sum += pow(n, 2);
        } else if (n < 0) {
            neg_sum -= pow(-n, 2);
        }
    }
    return abs(pos_sum - neg_sum);
}

int main() {
    vector<double> numbers;
    int n; 
    cin >> n;

    for(int i = 0; i < n; i++) {
        double num; 
        cin >> num;
        numbers.push_back(num);
    }

    long long result = doubleTheDifference(numbers);
    cout << "Double the difference: " << to_string(result) << endl;
    return 0;
}