std::vector<int> unique(const std::vector<int>& l){
    std::vector<int> temp = l;
    std::sort(temp.begin(), temp.end());
    temp.erase(std::unique(temp.begin(), temp.end()), temp.end());
    return temp;
}