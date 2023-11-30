def find_closest_elements(nums, k, x):
  return sorted(nums, key=lambda n: (abs(n - x), n))[:k]