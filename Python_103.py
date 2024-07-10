```
n = int(input('Enter first number: '))
m = int(input('Enter second number: '))

def rounded_avg(n, m):
    avg = (n + m) // 2
    return format(avg, "b").zfill(32)

print(rounded_avg(n, m))