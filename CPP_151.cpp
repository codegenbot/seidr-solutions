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
    vector<float> lst = {1.5, 2.25, 3.75, -2.25, 4};
    long long result = double_the_difference(lst);
    cout << "Result: " << result << endl;
    return 0;
}