int main() {
    assert(is_palindrome("xywzx") == false);
    assert(is_palindrome("level") == true);
    assert(is_palindrome("racecar") == true);
  
    std::cout << "All tests passed." << std::endl;
  
    return 0;
}