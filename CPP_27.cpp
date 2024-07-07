int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    assert(flip_case("These violent delights have violent ends") == "tHEse ViOlENT dElIgHTs HaVe ViOlENT EnDs");
    return 0;
}