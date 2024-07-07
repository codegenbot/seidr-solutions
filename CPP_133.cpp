int main() {
    std::vector<float> input{};
    float num;
    while(std::cin >> num) {
        input.push_back(num);
    }
    int output = sum_squares(input);
    std::cout << output << std::endl;
}