def difference(lst):
    odd_sum = sum(num ** 2 for num in lst if isinstance(num, int) and num >= 0 and num % 2 != 0)
    average_diff = (sum(lst) - odd_sum) / len(lst) if len(lst) > 0 else None
    return abs(average_diff - 2 * odd_sum)