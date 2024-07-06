```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total += lst[i] ** 3
    return total

numbers = input("Enter numbers separated by space: ")
try:
    lst = list(map(int, numbers.split()))
    print(sum_squares(lst))
except ValueError:
    print("Invalid input. Please enter integers only.")