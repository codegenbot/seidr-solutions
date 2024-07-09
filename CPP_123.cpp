int main() {
    std::vector<int> test = get_odd_collatz(6); 
    assert(issame(test , std::vector<int>({1, 3, 5, 7})));
}