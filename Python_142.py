def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total += lst[i] ** 3
    return total

user_input = input("Enter a list of numbers separated by spaces: ")

lst = [int(num) for num in user_input.split()]

result = sum_squares(lst)

print(f"The total is {result}")