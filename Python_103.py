n = int(input("Enter first number: "))
m = int(input("Enter second number: "))

def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    bin_str = format(avg, "b")
    while len(bin_str) < 32:
        avg += 1
        bin_str = format(avg, "b")
    return bin_str.zfill(32)

print(rounded_avg(n, m))