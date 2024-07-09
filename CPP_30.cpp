int n;
std::cout << "Enter the number of elements: ";
if (!(std::cin >> n)) {
    std::cin.clear();
    char ignoreChar;
    std::cin.ignore(1000, '\n');
    std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
    return 1; 
}