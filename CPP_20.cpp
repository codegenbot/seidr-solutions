int main() {
    if (find_closest_elements({{1.1f, 2.2f}, {3.1f, 4.1f}}) != std::make_pair(std::make_pair(2.0f, 3.0f), 0.0f)) {
        return 1;
    }
    return 0;
}