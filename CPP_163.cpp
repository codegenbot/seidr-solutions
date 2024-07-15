vector<int> result;
    for(int i = min(a, b); i <= max(a, b); i++) {
        if(i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}