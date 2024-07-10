def double_the_difference(lst):
    odd_sum = 0
    for i in lst:
        if isinstance(i, int) and i >= 0 and i % 2 != 0:
            odd_sum += i**2
        elif isinstance(i, str):
            pass
        else:
            raise ValueError("Invalid input type")
    return abs(odd_sum - min(lst)) * 2

print(double_the_difference(['7', '1']))