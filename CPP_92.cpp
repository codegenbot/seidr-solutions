int main() {
    float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (!any_int(a, b, c)) 
        std::cout << "No two numbers are the sum of the third." << std::endl;
    return 0;
}