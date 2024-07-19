int main
{
    std::cout << "Enter a number: ";
    int N;
    std::cin >> N;
    if (N == 0)
    {
        std::cout << "Invalid input. Please enter a non-zero integer." << std::endl;
        return 1;
    }
    printResult(N);
    return 0;
}