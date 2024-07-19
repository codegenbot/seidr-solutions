int main() {
    assert(sum_squares({-1,1,0})==2); 
    int input;
    std::cout << "Enter a number to pass to the sum_squares function: ";
    std::cin >> input;
    int result = sum_squares({(double)input});
}