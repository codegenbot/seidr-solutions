```
def sum_squares():
    while True:
        try:
            lst = list(map(int, input("Enter numbers separated by space: ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i < len(lst) - 1 and (i + 1) % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i < len(lst) - 2 and (i + 2) % 3 != 0:
            total += lst[i] ** 3
    return total

print(sum_squares())