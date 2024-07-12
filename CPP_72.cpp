```cpp
bool will_it_fly(std::vector<std::vector<int>>& q, int w) {
    int n = q.size();
    for(int i = 0; i < n; i++) {
        if(q[i].size() == 1 && q[i][0] <= w)
            return true;
    }
    return false;
}