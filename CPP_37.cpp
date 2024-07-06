#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    
    // separate even and odd numbers
    vector<float> evens;
    vector<float> odds;
    for (float x : l) {
        if (std::abs(x) % 2 == 0)
            evens.push_back(x);
        else
            odds.push_back(x);
    }

    // sort the even numbers
    std::sort(evens.begin(), evens.end());

    // alternate between even and odd numbers in the result
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            if (!evens.empty())
                result.push_back(evens.front());
            else
                result.push_back(odds.front());
            if (!evens.empty()) evens.pop_front();
            if (!odds.empty()) odds.pop_front();
        } else {
            if (!odds.empty())
                result.push_back(odds.back());
            if (!odds.empty()) odds.pop_back();
        }
    }

    return result;
}