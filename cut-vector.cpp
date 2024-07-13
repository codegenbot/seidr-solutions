int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; ++i) {
    cin >> nums[i];
  }
  
  int prefixSum = 0;
  int totalSum = accumulate(nums.begin(), nums.end(), 0);
  for (int i = 0; i < n; ++i) {
    prefixSum += nums[i];
    if (2 * prefixSum >= totalSum) {
      if (2 * prefixSum == totalSum) {
        cout << i + 1 << endl;
        for (int j = 0; j <= i; ++j) {
          cout << nums[j] << endl;
        }
        cout << 0 << endl;
      } else {
        cout << i << endl;
        for (int j = 0; j < i; ++j) {
          cout << nums[j] << endl;
        }
        cout << nums[i] << endl;
      }
      break;
    }
  }
  
  return 0;
}