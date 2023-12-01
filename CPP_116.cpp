vector<int> sort_array(vector<int> arr){
  sort(arr.begin(), arr.end(), [](int a, int b) -> bool {
    int a_ones = __builtin_popcount(a);
    int b_ones = __builtin_popcount(b);
    if (a_ones != b_ones) {
      return a_ones < b_ones;
    } else {
      return a < b;
    }
  });
  return arr;
}