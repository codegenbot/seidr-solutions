def sum_squares(lst, op):
    total_sum = 0
    for i in range(len(lst)):
        if op == "square":
            total_sum += lst[i] ** (i % 2 + 1)
        elif op == "cube":
            total_sum += lst[i] ** (i % 3 + 1)
    return total_sum


lst = [int(i) for i in input("Enter the list of numbers (space-separated): ").split()]
operation = input("Enter 'square' to square or 'cube' to cube: ")

if operation not in ["square", "cube"]:
    print("Invalid operation. Please enter 'square' or 'cube'.")
else:
    print(sum_squares(lst, operation))