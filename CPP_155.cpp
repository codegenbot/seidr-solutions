#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) 
            return false;
    }
    return true;
}

bool even_odd_count(int num, vector<int>& result) {
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        num /= 10;
    }
    return true;
}