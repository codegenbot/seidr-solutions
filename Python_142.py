def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 2 == 0:
            total_sum += lst[i] ** 2
        else:
            total_sum += lst[i] ** 3
    return total_sum

lst = list(map(int, input("Enter numbers separated by space: ").split()))
print(sum_squares(lst))