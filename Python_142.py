```
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += lst[i] ** 3
    return total_sum

user_list = input("Enter a list of numbers separated by space: ")
user_list = [int(i) for i in user_list.split()]
print(sum_squares(user_list))