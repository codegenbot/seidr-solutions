def sum_squares():
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    total = 0
    for i in range(len(numbers)):
        if (i + 1) % 3 == 0 and (i + 1) % 4 != 0:
            total += numbers[i] ** 2
        elif (i + 1) % 4 == 0 and (i + 1) % 3 != 0:
            total += numbers[i] ** 3
    print("The sum of squares is: ", total)