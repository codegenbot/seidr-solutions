int is_bored(std::string S){
    int count = 0;
    std::string boredom = "I";
    size_t pos = 0; 
    while (pos != std::string::npos) {
        pos = S.find(boredom, pos); 
        if (pos == std::string::npos) { 
            break;
        }
        count++;
        pos++; 
    }
    return count;

}