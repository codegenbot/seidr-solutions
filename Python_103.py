n = int(input("Enter first number: "))
m = int(input("Enter second number: "))


def rounded_avg(n, m):
    if n <= m:
        total = n + m
        avg = (total // 2) * 2
        while total != avg:
            avg += 1
        bin_str = format(avg, "b")
        return bin_str.zfill(32)
    else:
        return -1


print(rounded_avg(n, m))