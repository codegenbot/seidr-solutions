int main() {
    assert(std::issame(std::remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}