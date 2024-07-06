```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total += lst[i] ** 3
    return total

user_input = input("Enter numbers separated by space: ")
try:
    lst = list(map(int, user_input.split()))
except ValueError:
    print("Invalid input. Please enter integers only.")
else:
    if all(isinstance(x, int) for x in lst):
        print(sum_squares(lst))