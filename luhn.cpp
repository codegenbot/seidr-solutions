```c++
int luhn(std::vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        int temp = 0;
        if ((numbers.size() - i) % 2 == 1) { 
            std::transform(&numbers[i]*2, &numbers[i]*3, temp, [](int x){ return x > 9 ? x-9 : x; });
            sum += temp;
        } else {
            sum += numbers[i]; 
        }
    }
    return sum % 10 == 0;
}