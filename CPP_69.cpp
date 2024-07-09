while (!(std::cout << "Enter element " << i + 1 << ": ")) {
    if (!std::cin)
        std::cout << "Invalid input. Please enter a positive integer.\n";
    else
        std::cout << "Please enter a positive integer.\n";
    std::cin.clear();
    while (std::cin.get() != '\n') {}
}

int num;
while (!(std::cin >> num) || (num <= 0)) {
    if (!std::cin)
        std::cout << "Invalid input. Please enter a positive integer greater than zero.\n";
    else
        std::cout << "Please enter a positive integer greater than zero.\n";
    std::cin.clear();
    while (std::cin.get() != '\n') {}
    if (!std::cin >> num) {
        break;
    }
}
if(num <= 0) {
    i--;
} else {
    lst.push_back(num);
}