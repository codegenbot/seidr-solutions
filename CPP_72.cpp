int main {
    std::vector<std::vector<int>> q = {{1,2,3}};
    assert(will_it_fly(q, 6) == true);
    std::cout << will_it_fly(q, 5) << std::endl;
    return 0;
}