#include <iostream>
#include <vector>
#include <cmath> // for floor function

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num == floor(num) && num > 0 && ((int)num) % 2 != 0) {
            sum += (int)num * (int)num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float num;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        lst.push_back(num);
    }
    long long result = double_the_difference(lst);
    cout << "Sum of squares of positive odd integers: " << result << endl;
    return 0;
}