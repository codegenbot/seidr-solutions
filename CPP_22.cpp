std::vector<int> filter_integer(std::vector<int> values) {
    std::vector<int> result; 
    bool isFirst = true;
    for (int value : values) {
        if(value != 0) {
            if (!isFirst) {
                result.push_back(value);
            } else {
                result.push_back(value);
                isFirst = false; // Reset here to avoid exceeding maximum size.
            }
        } else {
            isFirst = true;
        }
    }
    isFirst = true; 
    return result;
}