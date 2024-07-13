int main_test() {
    std::cout << intToMiniRoman(1999) << std::endl;
    assert(intToMiniRoman(1000) == "M");
    return 0;
}