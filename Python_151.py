```
def double_the_difference(lst):
    even_nums = [num for num in lst if isinstance(num, int) and num % 2 == 0]
    odd_nums = [num for num in lst if isinstance(num, int) and num % 2 != 0]

    if not even_nums or not odd_nums:
        return 0

    mean_even = sum(even_nums) / len(even_nums)
    mean_odd = sum(odd_nums) / len(odd_nums)

    absolute_diff = abs(mean_even - mean_odd)
    return 2 * absolute_diff