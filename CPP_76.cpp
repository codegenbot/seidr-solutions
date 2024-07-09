int main
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isSimplePower(num)) {  
        std::cout << num << " is a simple power.\n";
    } else {
        std::cout << num << " is not a simple power.\n";
    }
    return 0;
}