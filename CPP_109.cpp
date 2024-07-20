int n = arr.size();
int min_val = *min_element(arr.begin(), arr.end());
int min_idx = find(arr.begin(), arr.end(), min_val) - arr.begin();
return is_sorted(arr.begin(), arr.end()) || (rotate(arr.begin(), arr.begin() + n - min_idx, arr.end()), is_sorted(arr.begin(), arr.end()));