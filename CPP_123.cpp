int main 
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    std::vector<int> result = get_odd_collatz(n);
    std::cout << "The Collatz sequence for " << n << " is: ";
    for (const auto& i : result) 
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
}