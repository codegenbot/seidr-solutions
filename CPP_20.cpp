bool issame(std::vector<float> a, std::vector<float> b);

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == std::make_pair(2.2f, 3.1f));
    return 0;
}