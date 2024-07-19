int solve(std::string s) {
    int count = 0;
    for (char c : s) {
        if (c == '#') {
            count++;
        }
    }
    return count % 2 != 0;
}

int originalMain() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    if (solve(s)) {
        std::cout << s << std::endl;
        return 1;
    } else {
        std::cout << "No solution exists" << std::endl;
        return 0;
    }
}