```cpp
#include <utility>
#include <vector>
#include <cmath>
#include <cstddef>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& nums) {
  size_t n = nums.size();
  int leftSum = nums[0], rightSum = 0;

  if (n == 1) {
    return std::make_pair(nums, nums);
  }

  for (size_t i = 1; i < n; i++) {
    rightSum += nums[i];
  }

  int minDiff = std::abs(leftSum - rightSum);
  size_t cutIndex = 0;

  for (size_t i = 1; i < n; i++) {
    leftSum += nums[i];
    rightSum -= nums[i];

    int diff = std::abs(leftSum - rightSum);
    if (diff < minDiff) {
      minDiff = diff;
      cutIndex = i + 1;
    }
  }

  std::vector<int> left(nums.begin(), nums.begin() + cutIndex);
  std::vector<int> right(nums.begin() + cutIndex, nums.end());

  return std::make_pair(left, right);
}

int main() {
  std::vector<int> inputVector;
  int num;
  while (std::cin >> num) {
    inputVector.push_back(num);
  }

  std::pair<std::vector<int>, std::vector<int>> result = cutVector(inputVector);

  std::cout << "Left subvector: ";
  for (int num : result.first) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  std::cout << "Right subvector: ";
  for (int num : result.second) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
```