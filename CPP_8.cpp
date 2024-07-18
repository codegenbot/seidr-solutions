bool issame(vector<int> a, vector<int> b);

pair<int, int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    pair<int, int> result = sum_product(vector<int>{10});
    return 0;
}