int maxCount = 0;
for (auto it = result.begin(); it != result.end(); ++it) {
    if (it->second > maxCount) {
        maxCount = it->second;
        maxMap.clear();
        maxMap[it->first] = it->second;
    } else if (it->second == maxCount) {
        maxMap[it->first] = it->second;
    }
}