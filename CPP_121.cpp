```cpp
int solution(vector<int> arr) {
    int result = 0;
    for (int i : arr) {
        result += i % 2;
    }
    return result;
}

int main() {
    int sum = solution({3, 13, 2, 9});
    cout << "Result: " << sum;
    cout << endl;
    return 0;
}