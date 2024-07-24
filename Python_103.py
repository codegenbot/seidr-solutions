n = float(input("Enter first number: "))
m = float(input("Enter second number: "))


def rounded_avg(n, m):
    if n != n or m != m:
        return str(n) + " " + str(m)
    avg = (n + m) // 2
    if (avg * 2) == (n + m):
        avg += 1
    return str(avg)


print(rounded_avg(n, m))