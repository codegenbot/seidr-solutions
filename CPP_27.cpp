int main() {
    try {
        std::cout << flip_case("These violent delights have violent ends") << std::endl;
    } catch (...) {
        std::cerr << "An error occurred." << std::endl;
    }
    assert(flip_case("These violent delights have violent ends") == "these violent delights have violent ends");
    return 0;
}