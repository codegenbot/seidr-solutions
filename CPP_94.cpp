```cpp
int main() {
    int result = f({127, 97, 8192});
    assert(result == 10);
    return 0;
}

int f(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        if (i >= 128)
            sum += 1;
        else
            sum += i;
    }
    return sum;
}