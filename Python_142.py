```Python
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total += lst[i] ** 3
    return total

while True:
    try:
        lst = list(map(int, input("Enter numbers separated by space: ").split()))
        if len(lst) < 3:
            print("Please enter at least 3 numbers.")
        else:
            break
    except ValueError:
        print("Invalid input. Please separate numbers with spaces.")

print(sum_squares(lst))