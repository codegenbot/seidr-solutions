#ifndef PairsSumToZero_h
#define PairsSumToZero_h

#include<vector>
#include<set>

bool pairs_sum_to_zero(std::vector<int> l);

#endif 

#include "PairsSumToZero.h"

#include<vector>
#include<set>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::set<int> s(l.begin(), l.end());
    for (int i = 0; i < s.size(); i++) {
        int target = -s[i];
        if (target != s[i] && s.count(target)) {
            return true;
        }
    }
    return false;
}