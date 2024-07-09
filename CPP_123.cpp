#include <vector>
#include <initializer_list>

bool areVectorsEqual(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> sequence;
    while(n > 1) {
        if(n % 2 != 0) {
            sequence.push_back(n);
        }
        n = (n * 3) + 1;
    }
    return sequence;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    auto collatz_sequence = get_odd_collatz(number);
    assert(areVectorsEqual(collatz_sequence, {1}));
    for(int i : collatz_sequence) {
        std::cout << i << " ";
    }
    return 0;
}