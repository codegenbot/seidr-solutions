#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    vector<float> list;
    float num;

    cout << "Enter numbers (enter -1 to stop):" << endl;
    while ((cin >> num) && (num != -1)) {
        list.push_back(num);
    }

    long long result = double_the_difference(list);

    cout << "The difference is: " << result << endl;

    return 0;
}