```
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += lst[i] ** 3
    return total_sum


lst_str = input("Enter the list of numbers (space-separated): ")
try:
    lst = [int(i) for i in lst_str.split()]
except ValueError:
    print("Invalid list. Please enter a valid list of integers.")
else:
    operation = input("Enter 'square' to square or 'cube' to cube: ").lower()
    if operation not in ["square", "cube"]:
        print("Invalid operation. Please enter 'square' or 'cube'.")
    else:
        if operation == "square":
            print(sum_squares(lst))
        elif operation == "cube":
            result = 0
            for num in lst:
                result += num ** 3
            print(result)