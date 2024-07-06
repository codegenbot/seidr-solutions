```cpp
auto maxIt = result.begin();
while (maxIt != result.end()) {
    if (maxIt->second == maxCount) {
        maxMap[maxIt->first] = maxIt->second;
        break;
    }
    ++maxIt;
}
return maxMap;