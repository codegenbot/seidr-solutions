std::vector<double> lst = {1.0, 2.0, 3.0, 4.0, 5.0};

long long int double_the_difference(std::vector<double> lst) {
    long long int sum = 0;
    for (double num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long int)(num * num);
        }
    }
    return sum;
}

int main() {
    long long int odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum);
    std::cout << "Odd sum: " << odd_sum << std::endl;
    return 0;
}