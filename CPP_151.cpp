int main() {
    std::vector<float> lst;
    float num;
    long long odd_sum = 0;

    while (std::cin >> num) {
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst);

    assert(double_the_difference(lst) == odd_sum);

    std::cout << "Result: " << odd_sum << std::endl;

    return 0;
}