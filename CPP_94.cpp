int sumVector(std::vector<int> lst) {
    int total = 0;
    for (int i : lst) {
        total += i;
    }
    return total;

}

int calculateSum(std::vector<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        total += number;
    }
    return total;
}

int main() {
    assert(calculateSum({127, 97, 8192}) == 1216);
    return 0;
}