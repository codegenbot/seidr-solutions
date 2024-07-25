std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == 1) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(j);
                result.push_back(temp);
            }
        } else {
            for (int j = 0; j < lst[i].size(); j++) {
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(j);
                result.push_back(temp);
            }
        }
    }
    return result;
}