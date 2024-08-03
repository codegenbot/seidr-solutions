def calculate_diff(lst):
    average = sum(i for i in lst) / len(lst)
    return abs(sum(i**2 for i in lst if isinstance(i, int)) - 2 * average ** 2)

result = calculate_diff([1, 3, 5])