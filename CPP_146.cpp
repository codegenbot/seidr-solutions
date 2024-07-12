int main 
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if(specialFilter(num)) {
        std::cout << "The number is special." << std::endl;
    } else {
        std::cout << "The number is not special." << std::endl;
    }
    return 0;
}