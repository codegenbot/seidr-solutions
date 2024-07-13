```cpp
std::pair<double, double> double_the_difference(const std::initializer_list<int>& lst) {
    int sum_even = 0, sum_odd = 0;
    int sz = 0; // Correctly counting elements in initializer list

    for (const int& num : lst) {
        if (num % 2 == 0)
            sum_even += num;
        else
            sum_odd += num;
    }

    return {(double)sum_even / sz, (double)sum_odd / sz};
}