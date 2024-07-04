vector<int> result;
    unordered_map<int, int> count;
    for (int num : numbers) {
        count[num]++;
    }
    for (int num : numbers) {
        if (count[num] == 1) {
            result.push_back(num);
        }
    }
    return result;
}