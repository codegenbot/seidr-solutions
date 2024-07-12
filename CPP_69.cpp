int main() {
    int numbers[] = {3, 10, 10, 9, 2};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    assert(findMaxFreq(numbers, size) == -1);
    return 0;
}