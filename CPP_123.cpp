int main 
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::vector<int> result = get_odd_collatz(n);
    if (issame(result, {1})) {
        std::cout << "The sequence for Collatz conjecture is: ";
        for (int i : result) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Sequence not found." << std::endl;
    }
}