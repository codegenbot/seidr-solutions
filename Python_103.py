def rounded_avg():
    n = int(input("Enter number n: "))
    m = int(input("Enter number m: "))
    if n > m:
        return -1
    avg = (n + m) // 2
    return bin(round(avg)).replace("0b", "")