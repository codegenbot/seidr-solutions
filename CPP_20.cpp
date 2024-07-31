int main() {
    auto issame = [](pair<float, float> a, pair<float, float> b) {
        return a.first == b.first && a.second == b.second;
    };

    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), make_pair(3.1, 4.1));

    return 0;
}