int main() {
    assert(Solution::is_same(Solution::generate_integers(17, 89), Solution::filter_even_numbers(Solution::generate_integers(17, 89))));
    return 0;
}