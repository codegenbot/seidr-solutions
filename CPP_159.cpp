int total = number + need;
    vector<int> result = {total, max(0, remaining - need)};
    return result;
}