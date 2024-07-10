def sum_squares(lst):
    total = 0
    for num in lst:
        if type(num) != int:
            return "Invalid input: list must contain integers."
        elif num % 3 == 0 and num % 4 != 0:
            total += num ** 2
        elif num % 4 == 0 and num % 3 != 0:
            total += num ** 3
    return total

lst = input("Enter a list of numbers separated by space: ")
lst = [int(i) for i in lst.split()]
print(sum_squares(lst))