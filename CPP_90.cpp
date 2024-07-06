int next_larger(std::vector<int> vec) {
    int result = -1;
    for(int i = vec.size() - 2; i >= 0; i--) {
        for(int j = i + 1; j < vec.size(); j++) {
            if(vec[j] > vec[i]) {
                result = vec[i];
                return result;
            }
        }
    }
    return result;
}