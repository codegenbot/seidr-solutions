def sum_squares(n):
    return sum(i**2 for i in range(1, n+1))

n = int(input("Enter a positive integer: "))
print(sum_squares(n))