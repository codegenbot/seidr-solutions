int search(std::vector<int> lst) {
    std::map<int, int> count;
    for (int num : lst) {
        if (count.find(num) == count.end()) {
            count[num] = 1;
        } else {
            count[num]++;
        }
    }

    int maxVal = -1;
    for (auto p : count) {
        int n = p.first;
        double sqrt_n = sqrt(n);
        if(sqrt_n == static_cast<int>(sqrt_n) && p.second >= sqrt_n && n > 0) {
            maxVal = n;
            break;
        }
    }

    return maxVal;
}