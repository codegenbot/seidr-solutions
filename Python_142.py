def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if num % 3 == 0 and num % 4 != 0:
            total_sum += num ** 2
        elif num % 4 == 0 and num % 3 != 0:
            total_sum += num ** 3
    return total_sum

input_list = list(map(int, input("Enter numbers separated by space: ").split()))
print(sum_squares(input_list))