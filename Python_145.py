
def order_by_points(nums):
    """
    Write a function which sorts the given list of integers
    in ascending order according to the sum of their digits.
    Note: if there are several items with similar sum of their digits,
    order them based on their index in original list.

    For example:
    >>> order_by_points([1, 11, -1, -11, -12]) == [-1, -11, 1, -12, 11]
    nums_sum = {}
    for num in nums:
        nums_sum[num] = sum(map(int, list(str(num))))
    nums_sum_sorted = sorted(nums_sum.items(), key=lambda x: x[1])
    return [nums_sum_sorted[i][0] for i in range(len(nums_sum_sorted))]
    >>> order_by_points([]) == []
    """
