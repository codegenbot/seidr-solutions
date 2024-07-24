import statistics


def rounded_avg():
    n = float(input("Enter the first number: "))
    m = float(input("Enter the second number: "))

    if n > m:
        return -1
    avg = int(statistics.mean([n, m]) + 0.5)
    return bin(int(avg))[2:]


print(rounded_avg())