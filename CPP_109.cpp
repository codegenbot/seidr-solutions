int main() {
    assert(move_one_ball({}) == true);
    assert(move_one_ball({1, 2, 3, 4, 5}) == true);
    assert(move_one_ball({5, 4, 3, 2, 1}) == false);

    return 0;
}