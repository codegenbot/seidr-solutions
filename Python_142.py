```
def sum_squares(lst, op):
    total_sum = 0
    for i in range(len(lst)):
        if op == 'square':
            if (i + 1) % 3 == 0 and (i + 1) % 4 != 0:
                total_sum += lst[i] ** 2
        elif op == 'cube':
            if (i + 1) % 4 == 0 and (i + 1) % 3 != 0:
                total_sum += lst[i] ** 3
    return total_sum

lst = [int(i) for i in input("Enter the list of numbers (space-separated): ").split()]
operation = input("Enter 'square' to square or 'cube' to cube: ")

if operation not in ['square', 'cube']:
    print("Invalid operation. Please enter 'square' or 'cube'.")
else:
    print(sum_squares(lst, operation))