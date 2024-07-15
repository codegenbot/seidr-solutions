```cpp
int basement(std::vector<int> v) {
    int sum = 0; 
    int i = 0;
    for (auto num : {v[0]} ) { // initialize with the first element of the vector
        sum += num;
        if (sum < 0)
            return i + 1;
        i++;
    }
    return -1;
}