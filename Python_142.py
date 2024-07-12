def sum_squares():
    n = int(input("Enter a number: "))
    total_sum = 0
    for i in range(1, n+1):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += i ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += i ** 3
    return total_sum