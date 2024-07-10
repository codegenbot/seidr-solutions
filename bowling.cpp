int roll(int frame, std::string& input) {
    int pin = 10; // number of pins left to knock down
    int rolls = 0;
    
    while (pin > 0 && rolls < 2) { 
        if(pin <= 1) break; 
        size_t pos = input.find_first_of("0123456789");
        if(pos != std::string::npos) {
            pin = std::stoi(input.substr(0, pos));
            input.erase(0, pos);
        } else {
            return -1;
        }
        rolls++;
    }
    
    return (frame == 0) ? pin : (10 + frame); 
}

int bowlingScore(const std::string& input) {
    int score = 0;
    for(char c : input) {
        if(c == '/') {
            score += roll(rollCount);
            rollCount = 0;
        } else if('1' <= c && c <= '9') {
            rollCount *= 10 + (c - '0');
        }
    }
    score += roll(rollCount);
    return score;
}

int main() {
    std::cout << "Enter your bowling scores: ";
    std::string input; 
    std::getline(std::cin, input);
    int result = bowlingScore(input);
    return 0;
}