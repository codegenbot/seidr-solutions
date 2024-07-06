```c
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && int(num) == num) { 
            sum += pow(int(num), 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float a, b; 
    cin >> a >> b;
    lst.push_back(a);
    lst.push_back(b);

    long long sum = 0;
    sum = double_the_difference(lst);
    cout << "Sum: " << sum << endl;

    return 0;
}