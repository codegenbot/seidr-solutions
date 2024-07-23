int main_func() {
    std::vector<int> numbers;
    int num;

    for (;;) {
        std::cout << "Enter some numbers (enter -1 when you are done):" << std::endl;
        if (!(std::cin >> num) || num == -1) break;
        while(std::cin.fail()) { 
            std::cout << "Invalid input. Please enter an integer:" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if (!(std::cin >> num) || num == -1) break; 
        }
        numbers.push_back(num);
    }
    int result = add(numbers);
    std::cout << "Sum of odd-indexed numbers: " << result << std::endl;

    return 0;
}