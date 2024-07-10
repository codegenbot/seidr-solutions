n = int(input("Enter first number: "))
m = int(input("Enter second number: "))


def rounded_avg(num):
    avg = (n + m) // 2
    bin_str = format(avg, "b")
    while len(bin_str) < 32:
        avg += 1
        bin_str = format(avg, "b")
    return bin_str.zfill(32)