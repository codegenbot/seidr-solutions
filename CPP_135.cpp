int can_arrange(std::vector<std::string> input) {
    std::sort(input.begin(), input.end());
    for(int i = 0; i < input.size() - 1; i++) {
        if((input[i].size() + 1 != input[i+1].size()) || (input[i][input[i].size()-1] - '0' > input[i+1][0] - '0')) 
            return -1;
    }
    return 1;
}