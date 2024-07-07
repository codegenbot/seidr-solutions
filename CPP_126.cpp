bool is_sorted(vector<int> lst) {
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i] <= lst[i-1]) {
            vector<int> temp;
            bool flag = true;
            for(int j = 0; j < lst.size(); j++) {
                if(j == i) continue;
                temp.push_back(lst[j]);
                if(temp.back() >= temp[temp.size()-2]) {
                    flag = false;
                    break;
                }
            }
            if(flag) return false;
        }
    }
    return true;
}