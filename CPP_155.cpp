std::vector<int> result;
    int count = 0;
    for (int i = 0; i < b.size(); ++i) {
        if (b[i] == num) {
            count++;
        }
    }
    result.push_back(count);
    return result;