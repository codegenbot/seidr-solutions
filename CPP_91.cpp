int is_bored(std::string S){
    int count = 0;
    std::string boredom = "I";
    size_t pos = S.find(" ");
    while (pos != std::string::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
            break;
        }
        pos = S.find(" ", pos); 
    }
    return count;

}