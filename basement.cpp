int basement(std::vector<int> v) {
    int sum = 0; 
    int i = 0;
    for (auto num : {v[0]} ) { 
        sum += num;
        if (sum < 0)
            return i + 1;
        i++;
    }
    return -1;
}