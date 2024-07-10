//int main() {
    int n;
    std::cin >> n;
    std::cout << get_matrix_triples(n) << std::endl;
    assert(get_matrix_triples(100) == 53361);
    return 0;
    //}