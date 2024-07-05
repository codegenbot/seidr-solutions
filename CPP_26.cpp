vector<int> result;
    unordered_map<int, int> count_map;

    for (int num : numbers) {
        count_map[num]++;
    }

    for (int num : numbers) {
        if (count_map[num] == 1) {
            result.push_back(num);
        }
    }

    return result;
}