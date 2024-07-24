```Python
n = int(input("Enter first integer: "))
m = int(input("Enter second integer: "))

def rounded_avg(n, m):
    if n < 0 or m < 0:
        return "Error: Negative numbers are not allowed"
    elif not isinstance(n, int) or not isinstance(m, int):
        return "Error: Non-integer inputs are not allowed"

    if n > m:
        return -1
    avg = (n + m) // 2  
    if (avg * 2) == (n + m):  
        avg += 1
    return str(bin(int(avg))[2:])