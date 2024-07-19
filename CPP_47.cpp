#include <vector>
#include <iostream>

float calculateMedian(std::vector<float> numbers) {
    int n = numbers.size();
    std::sort(numbers.begin(), numbers.end());
    
    if (n % 2 == 0)
        return (numbers[n/2 - 1] + numbers[n/2]) / 2.0;
    else
        return numbers[n/2];
}

int main() {
    std::vector<float> numbers;
    float num;

    while (cin >> num) {
        numbers.push_back(num);
    }

    cout << calculateMedian(numbers) << endl;

    return 0;
}