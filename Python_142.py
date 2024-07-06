def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if (i % 3 == 0 and i % 4 != 0) or (i % 4 == 0 and i % 3 != 0):
            if i % 3 == 0:
                total_sum += lst[i] ** 2
            else:
                total_sum += lst[i] ** 3
    return total_sum

lst = [1, 2, 3, 4, 5]
print(sum_squares(lst))