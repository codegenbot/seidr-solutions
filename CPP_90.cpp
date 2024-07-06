int next_larger(std::vector<int> lst) {
    int result = -1;
    for(int i = 0; i < lst.size(); i++){
        bool isLargerFound = false;
        for(int j = i + 1; j < lst.size(); j++){
            if(lst[j] > lst[i]){
                isLargerFound = true;
                result = lst[i];
                break;
            }
        }
        if(isLargerFound) break;
    }
    return result;
}