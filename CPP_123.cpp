```
bool sequenceEqual(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

void get_odd_collatz(int n) {
    std::vector<int> sequence;
    sequence.push_back(n);
    while (n != 1 && isOdd(n)) {
        if (n > 1)
            n = n / 3;
        else
            n = 4 * n + 1;
        sequence.push_back(n);
    }
    std::cout << "Sequence: ";
    for (int num : sequence) 
        std::cout << num << " ";
    std::cout << std::endl;

}

int main 
{
    int num;
    std::cin >> num;
    get_odd_collatz(num);
    assert(sequenceEqual(get_odd_collatz(1), {1}));
}