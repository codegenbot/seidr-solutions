def rounded_avg():
    n = int(input("Enter the first number: "))
    m = int(input("Enter the second number: "))
    if n > m:
        return -1
    avg = (n + m) // 2
    return str(avg)