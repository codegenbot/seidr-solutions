```cpp
for (std::string line; std::getline(std::cin, line); ) {
    if (!line.empty()) {
        double val = std::stod(line);
        odd_sum += double_the_difference({val});
    }
}