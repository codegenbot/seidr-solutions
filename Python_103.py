```
n = int(input("Enter first integer: "))
m = int(input("Enter second integer: "))

def rounded_avg(n, m):
    avg = (n + m) // 2
    if (n + m) % 2 == 0:
        return str(avg)
    else:
        return str(avg + 1)

print(rounded_avg(n, m))