int n = arr.size();
if (n == 0) {
    return true;
}
int min_val = *min_element(arr.begin(), arr.end());
int min_idx = find(arr.begin(), arr.end(), min_val) - arr.begin();
for (int i = 0; i < n; i++) {
    if (arr[(min_idx + i) % n] != min_val + i) {
        return false;
    }
}
return true;