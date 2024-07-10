```
n = int(input("Enter first number: "))
m = int(input("Enter second number: "))


def rounded_avg(n, m):
    if n <= m:
        total = n + m
        avg = total // 2
        if total % 2 != 0:
            while (avg * 2) + 1 <= total:
                avg += 1
        return format(avg, "b").zfill(32)
    else:
        return -1

print(rounded_avg(n, m))