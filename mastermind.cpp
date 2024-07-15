int blackPegs(std::string code, std::string guess) {
    int blackCount = 0;
    int whiteCount = whitePegs(code, guess);
    
    std::unordered_map<char,int> codeMap;
    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
    }
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackCount++;
            codeMap[guess[i]]--;
        } else {
            codeMap[guess[i]]--;
            
            bool isCorrect = false;
            for(int j=0; j<4; j++) {
                if(i != j && code[j] == guess[i]) {
                    isCorrect = true;
                    break;
                }
            }
            
            if(!isCorrect) {
                blackCount++;
            }
        }
    }
    
    return blackCount;
}