int search(vector<int> myVector) {
    map<int, int> countMap;
    for (auto i : myVector) {
        countMap[i]++;
    }
    
    for (auto p : countMap) {
        if (p.second > 1) return p.first; 
    }
    return -1;
}