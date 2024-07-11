int is_bored(string S){
    int boredom_count = 0;
    string delimiter = ".?!";
    size_t pos = 0;

    while ((pos = S.find_first_of(delimiter, pos)) != string::npos) {
        size_t start_pos = S.rfind(" ", pos) + 1;
        if (S.substr(start_pos, 1) == "I") {
            boredom_count++;
        }
        pos++;
    }
    
    return boredom_count;
}