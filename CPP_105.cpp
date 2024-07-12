int main() {
    std::vector<std::pair<std::string, int>> input = {std::make_pair("Nine", 1), std::make_pair("Eight", 2), std::make_pair("Four", 3)};
    auto output = by_length({std::get<0>(x) for x in input});
    return 0;
}