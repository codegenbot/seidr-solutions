int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long long odd_sum = double_the_difference(lst);
    std::cout << odd_sum;
    
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}