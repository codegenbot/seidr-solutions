int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10)); // Sample test case
    assert(below_threshold({3, 6, 9}, 10)); // Additional test case
    assert(!below_threshold({5, 7, 2, 4, 6}, 8)); // Additional test case
    return 0;
}