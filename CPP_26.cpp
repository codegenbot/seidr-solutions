```cpp
set<int> seen;
vector<int> result;
for (int num : numbers) {
    if (seen.insert(num).second) { 
        result.push_back(num);
    }
}
return result;