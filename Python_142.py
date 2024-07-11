lst = input("Enter a list of numbers separated by spaces: ")
lst = [int(i) for i in lst.split()]
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if num % 3 == 0 and num % 4 != 0:
            total_sum += num ** 2
        elif num % 4 == 0 and num % 3 != 0:
            total_sum += num ** 3
        elif num % 3 == 0 and num % 4 == 0:
            total_sum += num ** 3.5
    return total_sum
print(sum_squares(lst))