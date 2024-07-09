```
def sum_squares():
    lst = list(map(int, input("Enter numbers separated by space: ").split()))
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            try:
                total += int(str(lst[i]) ** 2)
            except ValueError:
                return "Error: Input contains non-numeric characters"
        elif i % 4 == 0 and i % 3 != 0:
            try:
                total += int(str(lst[i])) ** 3
            except ValueError:
                return "Error: Input contains non-numeric characters"
    return total

print(sum_squares())