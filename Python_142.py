```
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += lst[i] ** 3
    return total_sum

input_str = input("Enter numbers separated by space: ")
try:
    input_list = list(map(int, input_str.split()))
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")
    exit()
print(sum_squares(input_list))