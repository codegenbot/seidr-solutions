while True:
    try:
        lst = list(map(int, input("Enter numbers separated by space: ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by space.")

total = 0
for i in range(len(lst)):
    if i % 3 == 0 and i % 4 != 0:
        total += lst[i] ** 2
    elif i % 4 == 0 and i % 3 != 0:
        total += lst[i] ** 3
return total