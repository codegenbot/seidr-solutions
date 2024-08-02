int main() {
    float a, b, c;
    std::cin >> a >> b >> c;
    if (!any_int(a, b, c)) {
        std::cout << "No three integers are in the form of x + y or x - y.\n";
    }
    return 0;
}