int main() {
    assert(is_sorted({1, 2, 3, 4}) == true); 
    assert(is_sorted({2, 5, 7, 9, 11}) == true); 
    assert(is_sorted({3, 1, 4, 7}) == false); 
    assert(is_sorted({9, 8, 7, 6}) == false); 
    // Add more test cases if needed
    return 0;
}