int whitePegs(std::string code, std::string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(std::string code, std::string guess) {
    int whiteCount = whitePegs(code, guess);
    
    std::unordered_map<char,int> codeMap;
    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
    }
    
    int correctPosition = 0;
    for(int i=0; i<4; i++) {
        if(codeMap[code[i]] > 0 && code[i] == guess[i]) {
            correctPosition++;
            codeMap[code[i]]--;
        }
    }
    return correctPosition;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    std::cout << white << " " << black << std::endl;
    return 0;
}