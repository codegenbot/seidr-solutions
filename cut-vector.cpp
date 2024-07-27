for (int i = 0; i < n-2; ++i) {
    int diff = abs(vec[i] - vec[i+1]);
    if (diff < min_diff) {
        min_diff = diff;
        best_spot = i;
    }
}

std::vector<int> subvector1(vec.begin(), vec.begin() + best_spot);
std::vector<int> subvector2(vec.begin() + best_spot, vec.end());