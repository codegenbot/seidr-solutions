while (std::cin >> num || !std::cin.eof()) {
    if (std::cin.fail()) {
        break;
    }
    nums.push_back(num);
}