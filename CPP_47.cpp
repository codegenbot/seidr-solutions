```cpp
double median(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0)
        return (numbers[numbers.size()/2 - 1] + numbers[numbers.size()/2]) / 2.0;
    else
        return static_cast<double>(numbers[std::distance(numbers.begin(), numbers.begin() + numbers.size()/2)]);
}