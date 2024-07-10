```cpp
int odd_sum = 0;

double double_the_difference(vector<int> lst) {
    int sum = 0;
    for (int i : lst) {
        if (i % 2 != 0)
            sum += i;
    }
    return static_cast<double>(sum);
}

int main() {
    for (std::string line; std::getline(std::cin, line); ) {
        if (!line.empty()) {
            double val = std::stod(line);
            odd_sum += double_the_difference({static_cast<int>(val)});
        }
    }
    return 0;
}