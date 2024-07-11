Here's your modified code:

def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 2:
            total_sum += lst[i] ** 2
        elif i % 4 == 3:
            total_sum += lst[i] ** 3
    return total_sum

input_list = list(map(int, input("Enter numbers separated by space: ").split()))
print(sum_squares(input_list))