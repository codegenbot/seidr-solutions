for (const auto &pair : count) {
    if (pair.second == maxCount) {
        result[pair.first] = pair.second;
    }
}