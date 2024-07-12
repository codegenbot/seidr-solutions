int specialFilter(int num) {
    std::string num_str = std::to_string(num);
    if (abs(std::stoi(num_str)) > 10 && (std::stoi(num_str) % 10) % 2 != 0 && (std::stoi(num_str) / 10) % 10 % 2 != 0) {
        return 1;
    }
    return 0;
}