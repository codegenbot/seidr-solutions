bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (char c : brackets) {
        if (c == '(') count++;
        else if (c == ')') {
            if (count <= 0) {
                std::cout << "Incorrect pairing at the end." << std::endl; 
                return false; 
            }
            count--;
        }
    }
    if(count > 0) std::cout << "Unclosed parentheses." << std::endl;
    return count == 0;
}