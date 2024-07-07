void anti_shuffle(int arr[], int n) {
    if (n <= 1)
        return;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
            i--;
        }
    }
}

int main() {
    int arr[] = {4, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    anti_shuffle(arr, n);
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}