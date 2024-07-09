```
void print_numbers(int n) {
    for (int i = 1; i <= n; ++i) {
        if (!is_sorted({i})) {
            std::cout << i;
            break;
        }
    }
}

bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    print_numbers(n);
    return 0;
}