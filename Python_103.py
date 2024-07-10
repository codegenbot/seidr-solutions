```
n = int(input('Enter first number: '))
m = int(input('Enter second number: '))

def rounded_avg(n, m):
    avg = (n + m) // 2
    while True:
        bin_str = format(avg, "b")
        if len(bin_str) >= 32:
            return bin_str.zfill(32)
        avg += 1

print(rounded_avg(n, m))