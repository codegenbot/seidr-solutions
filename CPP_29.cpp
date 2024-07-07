int main() {
    auto result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx");
    if (std::equal(result.begin(), result.end(), {"xxx", "xxxAAA", "xxx"}.begin())) {
        std::cout << "Filtering successful." << std::endl;
    } else {
        std::cout << "Filtering failed." << std::endl;
    }
    return 0;
}