#include <vector>

int sumOdds(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> input;
    int num;

    // Read input from the user
    while (std::cin >> num) {
        input.push_back(num);
    }

    int solution = sumOdds(input);

    std::cout << "The sum of odd numbers is: " << solution << std::endl;

    return 0;
}