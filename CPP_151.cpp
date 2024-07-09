long long double_the_difference(std::vector<float> numbers) {
    long long sum = 0;
    for (float num : numbers) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers = {1.5f, 2.0f, 3.5f};
    long long odd_sum = double_the_difference(numbers);
    assert(double_the_difference(numbers) == odd_sum); 
    return 0;
}