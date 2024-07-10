int sumVector(std::vector<int> lst) {
    int total = 0;
    for (int i : lst) {
        total += i;
    }
    return total;
}

int main() {
    assert(sumVector({127, 97, 8192}) == 1216);
    std::vector<int> input;
    int num;
    
    // read input from user
    while(std::cin >> num) {
        input.push_back(num);
    }
    
    // calculate sum of the vector
    int total = sumVector(input);
    return 0;
}