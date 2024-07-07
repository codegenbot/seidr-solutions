int main() {
    if (is_same(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"})) {
        std::cout << "Filtering successful." << std::endl;
    } else {
        std::cout << "Filtering failed." << std::endl;
    }
    return 0;
}