def double_the_difference(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    difference = abs(min_num) + abs(max_num)
    result = difference * 2
    return result

print(double_the_difference([1, 2, -3, 4]))