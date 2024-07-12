def rounded_avg():
    n = int(input("Enter first number: "))
    m = int(input("Enter second number: "))
    if n > m:
        return -1
    avg = round((n + m) / 2.0)
    return bin(avg)[2:]