```
def sum_squares():
    while True:
        try:
            lst = list(map(int, input("Enter 12 numbers separated by space: ").split()))
            if len(lst) != 12:
                raise ValueError
            break
        except ValueError:
            print("Invalid input. Please enter exactly 12 numbers.")
    
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total += lst[i] ** 3
    return total

print(sum_squares())