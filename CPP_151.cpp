#include <vector> // Add this line to include the vector header

long long double_the_difference(std::vector<float> lst){ // Use std:: prefix and specify the vector and float types
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.3, 3.8, 4.7, 5.5}; // Replace this line with the values that you want to test

    long long odd_sum = 0; // Provide a suitable value for odd_sum

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}