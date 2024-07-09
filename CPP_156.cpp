int main() {
    for(int i = 1; i <= 3999; i++) { 
        std::cout << i << ": " << int_to_roman(i); 
        std::cout << std::endl;
    }
    assert(int_to_roman(1000) == "M");
    return 0;
}