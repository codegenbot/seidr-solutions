```int main() {
    std::vector<int> input;
    int n;
    while (true) {
        std::cout << "Enter the number of integers to process (0 to finish): ";
        std::cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; ++i) {
            std::cout << "Enter integer #"<< i+1 << ": ";
            int num;
            std::cin >> num;
            input.push_back(num);
        }
    }
    int output = fuelCost(input);
    std::cout << "The total fuel cost is: " << output << std::endl;
} // <--- Add this curly brace
    return 0;