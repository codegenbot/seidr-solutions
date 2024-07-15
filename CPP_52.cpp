auto below_threshold = [](const std::vector<int>& l, int t) -> bool {
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
};

assert (not(below_threshold(std::vector<int>{1, 8, 4, 10}, 10)));