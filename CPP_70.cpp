```cpp
bool issame(std::vector<int> a,std::vector<int>b) {
    std::vector<int> result;
    if (a.empty() && b.empty()) 
        return true;

    if ((a.empty() && !b.empty()) || (!a.empty() && b.empty()))
        return false;

    for(int i = 0; i < a.size(); i++) {
        bool found = false;
        for(int j = 0; j < b.size(); j++) {
            if(a[i] == b[j]) {
                result.push_back(a[i]);
                a.erase(std::remove(a.begin(), a.end(), a[i]), a.end());
                b.erase(std::remove(b.begin(), b.end(), b[j]), b.end());
                found = true;
                break;
            }
        }
        if(!found) 
            return false;
    }

    if (!a.empty() || !b.empty()) 
        return false;

    return true;
}