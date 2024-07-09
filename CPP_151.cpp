int main_cpp() {
    float input; 
    int n = 0;
    std::vector<std::variant<float, long long>> lst;
    long long odd_sum = 0;

    while (1) {
        std::cout << "Enter a number (negative to stop): ";
        std::cin >> input;
        
        if (input < 0) break;
        if (input > 0 && std::floor(input) == input) {
            if (static_cast<long long>(input) % 2 != 0) { 
                lst.push_back(static_cast<long long>(std::pow(input, 2))); 
            }
            else {
                lst.push_back(input);
            }
        }
        else {
            lst.push_back(input);
        }
        n++;
   }
    
    odd_sum = double_the_difference(lst);
    return 0;
}