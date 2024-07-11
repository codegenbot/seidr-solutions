```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0:
            total += lst[i] ** 2 if i % 4 != 0 else lst[i] ** 3
    return total

numbers = input("Enter a list of numbers separated by spaces: ").split()
numbers = [int(num) for num in numbers]

result = sum_squares(numbers)
print(result)