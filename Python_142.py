numbers = [int(x) for x in input().split(',')]
def sum_squares(numbers):
    total_sum = 0
    for number in numbers:
        total_sum += number ** 2
    return total_sum
print(sum_squares(list(map(int, numbers))))