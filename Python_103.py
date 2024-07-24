def rounded_avg():
    n = int(input("Enter value for n: "))
    m = int(input("Enter value for m: "))
    if n > m:
        return -1
    avg = (n + m) // 2
    return bin(round(avg)).replace("0b", "")