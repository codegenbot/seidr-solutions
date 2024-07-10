def total_double_difference(a, b, nums):
    double_sum = double_the_difference(nums)
    return abs((a - b) - 2 * double_sum)