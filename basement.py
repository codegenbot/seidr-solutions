def basement(nums):
  sum_so_far = 0
  for i, num in enumerate(nums):
    sum_so_far += num
    if sum_so_far < 0:
      return i
  return -1