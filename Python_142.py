def sum_squares(numbers):
    total_sum = 0
    for number in numbers:
        total_sum += number ** 2
    return total_sum

numbers = list(map(int, input().split(',')))
print(sum_squares(numbers))