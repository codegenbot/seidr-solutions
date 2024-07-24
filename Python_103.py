```
n = float(input("Enter first number: "))
m = float(input("Enter second number: "))


def rounded_avg(n, m):
    avg = (n + m) / 2.0
    return str(round(avg))


print(rounded_avg(n, m))