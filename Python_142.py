def sum_squares(numbers):
    total_sum = 0
    for num in numbers:
        total_sum += num ** 2
    return total_sum

numbers = [int(x) for x in input().split(', ')]
print(sum_squares(list(map(int, numbers))))