int cutIndex = 0;
for (int i = 1; i < v.size(); ++i) {
    if (std::abs(v[i] - v[0]) <= std::abs(v[i-1] - v[0])) {
        cutIndex = i;
        break;
    }
}
return {std::vector<int>(v.begin(), v.begin() + cutIndex), std::vector<int>(v.begin() + cutIndex, v.end())};