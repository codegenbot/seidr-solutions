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
    // initialize lst with input values...
    float num1, num2, num3, num4, num5;
    cout << "Enter five numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    lst.push_back(num1);
    lst.push_back(num2);
    lst.push_back(num3);
    lst.push_back(num4);
    lst.push_back(num5);
    long long sum = 0;
    sum = double_the_difference(lst);
    cout << "Sum: " << sum << endl;
    return 0;
}