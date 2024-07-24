```
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if lst[i] % 2 != 0:
            total_sum += lst[i]**2
    return total_sum

user_input = list(map(int, input("Enter numbers separated by space: ").split()))
print(sum_squares(user_input))