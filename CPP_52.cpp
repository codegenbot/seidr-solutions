auto below_threshold = [](const std::vector<int>& l, int t) -> bool {
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
};

assert(!below_threshold({1, 8, 4, 10}, 10));