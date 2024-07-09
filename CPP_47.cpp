int testMedian() {
    std::vector<float> numbers;
    std::cout << "Enter the numbers (enter 'stop' to finish): ";
    std::string input;
    while (true) {
        std::cin >> input;
        if (input == "stop") break;
        try {
            float num = std::stof(input);
            numbers.push_back(num);
        } catch(const std::invalid_argument& e) {
            std::cout << "Invalid number. Please enter a valid floating point number." << std::endl;
            while (!(std::cin >> input)) {  
                std::cout << "Invalid input. Please try again: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }
    if (numbers.size() > 0) {
        float result = median(numbers);
        std::cout << "The median of the given numbers is: " << result << std::endl;
    } else {
        std::cout << "No numbers were entered." << std::endl;
    }
    return 0;
}