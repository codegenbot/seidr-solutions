int main() {
    assert(Solution::issame(Solution::generate_integers(17, 89), Solution::filter_even_numbers(Solution::generate_integers(17, 89))));
    return 0;
}