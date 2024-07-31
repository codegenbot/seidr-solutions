std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) return array;
    
    std::sort(array.begin(), array.end(), (array.front() + array.back()) % 2 == 0 ? std::greater<int>() : std::less<int>());
    
    return array;
}