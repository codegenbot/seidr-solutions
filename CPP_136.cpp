int main() {
    assert(MyNamespace::isSame(MyNamespace::largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {std::max(-6,0), std::min(1,-100)}));
    return 0;
}