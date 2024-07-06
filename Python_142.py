```
def solve(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += lst[i] ** 3
    return total_sum

lst = list(map(int, input("Enter the list of numbers (space-separated): ").split()))
operation = input("Enter 'square' to square or 'cube' to cube: ")

if operation == "square":
    print(solve(lst))
elif operation == "cube":
    result = sum(num ** 3 for num in lst)
    print(result)
else:
    print("Invalid operation. Please enter 'square' or 'cube'.")