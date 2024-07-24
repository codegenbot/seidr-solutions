template <typename T>
T compare_one(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    assert(compare_one(string("1"), string("2")) == "2");
    return 0;
}
