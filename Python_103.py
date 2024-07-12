def rounded_avg():
    n = int(input("Enter first number: "))
    m = int(input("Enter second number: "))
    if n > m:
        return -1
    avg = (n + m) / 2
    return bin(int(round(avg))).replace("0b", "")