```
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 2 == 0: 
            total_sum += lst[i] ** 2
        else:
            total_sum += lst[i] ** 3
    return total_sum

print(sum_squares([1, 2, 3, 4, 5, 6]))