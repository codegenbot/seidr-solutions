int main() {
    int number, need, remaining;
    std::cin >> number >> need >> remaining;
    std::vector<int> result = eat(number, need, remaining);
    std::cout << result[0] << " " << result[1] << std::endl;
    return 0;
}