```
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0:
            total += lst[i] ** 2
        elif i % 4 == 0:
            total += lst[i] ** 3
    return total

n = int(input("Enter the number of elements: "))
lst = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
print(sum_squares(lst))