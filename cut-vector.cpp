while (std::cin >> num) {
    nums.push_back(num);
}

if (std::cin.fail()) {
    std::cin.clear(); // Clear the fail state
    std::cin.ignore(INT_MAX, '\n'); // Ignore the rest of the input
    break; // Exit the loop when no more input is available
}

if (nums.empty()) {
    return 0; // No input provided
}