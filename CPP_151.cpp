#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    int n;
    float val;

    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> val;
        lst.push_back(val);
    }

    long long result = double_the_difference(lst); 
    std::cout << "Sum of squares of odd integers is: " << result << std::endl;

    return 0;
}