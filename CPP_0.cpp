bool has_close_elements(vector< initializer_list<float> > a, float tol) {
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i + 1; j < a.size(); j++) {
            for (auto it = a[i].begin(); it != a[i].end(); ++it) {
                bool found = false;
                for (auto it2 = a[j-1].begin(); it2 != a[j-1].end(); ++it2) {
                    if (std::abs(*it - *it2) < tol) {
                        found = true;
                        break;
                    }
                }
                if (found) {
                    return true;
                }
            }
        }
    }
    return false;
}