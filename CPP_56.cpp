int correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '<') {
            count++;
        } else if (c == '>') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    std::string test1 = "<><><>";
    std::string test2 = "<><><";
    
    std::cout << "Test 1: " << correct_bracketing(test1) << std::endl;
    std::cout << "Test 2: " << correct_bracketing(test2) << std::endl;
    
    return 0;
}