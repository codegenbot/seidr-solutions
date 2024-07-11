```cpp
pair<int, int> even_odd_count(int num) {
    pair<int, int> result = {0, 0};
    string str_num = std::to_string(std::abs(num)); 
    for (char c : str_num) { 
        if ((c - '0') % 2 == 0)
            ++result.first;
        else
            ++result.second;
    }
    return result;
}