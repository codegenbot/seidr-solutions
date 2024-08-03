```
def sum_squares():
    lst = input("Enter a list of numbers separated by space: ").split()
    try:
        lst = [int(i) for i in lst]
    except ValueError:
        print("Invalid input. Please enter integers only.")
        return
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += lst[i] ** 3
    print(total_sum)

sum_squares()