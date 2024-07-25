bool issame(std::vector<float> a, std::vector<float> b) { 
    return std::all_of(a.begin(), a.end(),
                       [b](float x){ return std::find(b.begin(), b.end(), x) != b.end(); });
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}