```cpp
int main() {
    vector<int> lst = {4, 4, 6, 8};
    int result = add(lst);
    assert(result == 12); 
    return 0;
}

int add(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}