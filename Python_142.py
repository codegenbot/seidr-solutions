```
def sum_squares(*args):
    total_sum = 0
    i = 0
    while i < len(args):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += args[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += args[i] ** 3
        i += 1
    return total_sum

num_list = input("Enter numbers separated by space: ").split()
num_list = list(map(int, num_list))
print(sum_squares(*num_list))