int main 
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::vector<int> result = get_odd_collatz(n);
    std::cout << "Collatz sequence for " << n << ": ";
    for (auto x : result) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}