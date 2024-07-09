#include <vector>
#include <algorithm>

bool issame(const vector<float>& l) {
    bool same = true;
    if (!l.empty()) {
        auto first = l[0];
        for (float num : l) {
            if (num != first)
                return false;
        }
        return true;
    }
    return false;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float num : l){
        if(num > 0)
            result.push_back(num);
    }
    return result;
}
```

Note: The given code was already correct, so the modification is not necessary.