std::vector<int> separateZeroes(std::vector<int> values) {
    std::vector<int> zeroes;
    std::vector<int> non_zeroes;

    for (int value : values) {
        if(value != 0) {
            non_zeroes.push_back(value);
        } else {
            zeroes.push_back(value);
        }
    }

    return {zeroes, non_zeroes};
}