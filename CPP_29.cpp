int main() {
    for (const auto &str : filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx")) {
        cout << str << endl;
    }

    return 0;
}