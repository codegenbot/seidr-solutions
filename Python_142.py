```
def sum_squares():
    n = int(input("Enter the number: "))
    return sum([i**2 for i in range(1, n+1)])

check(sum_squares())