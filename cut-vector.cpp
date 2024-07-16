for (int i = 0; i < vec.size() - 1; ++i) {
    int diff = abs(vec[i] - vec[i + 1]);
    if (diff < min_diff) {
        min_diff = diff;
        idx = i;
    }
}

if (idx > 0 && idx < vec.size() - 1 && vec[idx - 1] == vec[idx + 1]) {
    idx--;
}

std::vector<int> subvec1(vec.begin(), vec.begin() + idx + 1);
std::vector<int> subvec2(vec.begin() + idx + 1, vec.end());