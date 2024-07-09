int main 
{
    int num;
    std::cin >> num;
    get_odd_collatz(num);
    assert(sequenceEqual(get_odd_collatz(1), {1}));
}