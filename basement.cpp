```c++
int basement(vector<int> v) {
    int sum = 0;
    int i = 0;
    while (i < v.size()) {
        sum += v[i];
        if (sum < 0)
            return i;
        i++;
    }
    return -1;
}

int main() {
    vector<int> v = {1};
    return basement(v);
}