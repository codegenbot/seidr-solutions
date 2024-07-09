#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    if (a - b > 1e-5 || b - a > 1e-5) {
        return false;
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> l_new;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_new.push_back(l[i]);
        } else {
            bool inserted = false;
            for (float x : l) {
                if (x > l[i]) {
                    l_new.insert(l_new.begin() + (l.size()-1), x);
                    inserted = true;
                    break;
                }
            }
            if (!inserted) l_new.push_back(l[i]);
        }
    }
    return l_new;
}