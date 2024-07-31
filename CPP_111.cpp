int solveProblem() {
    // Input from user
    std::string input;
    std::getline(std::cin, input);

    // Call histogram function with user input and print the result
    std::map<char, int> result = histogram(input);
    for (const auto& pair : result) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}

int main() {
    return solveProblem();
}