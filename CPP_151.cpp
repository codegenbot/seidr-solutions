#include <iostream>
#include <vector>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num == (int)num && num > 0 && ((int)num % 2 != 0)) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        float temp;
        cin >> temp;
        lst.push_back(temp);
    }
    long long result = double_the_difference(lst);
    cout << result << endl;
    return 0;
}