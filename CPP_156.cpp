```cpp
std::string int_to_mini_roman(int num) {
    return toMiniRomanHelper(num, "", "M");
}

int main() {
    assert (int_to_mini_roman(1000) == "M");
    //...
}