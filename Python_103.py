n = int(input("Enter first integer: "))
m = int(input("Enter second integer: "))

def rounded_avg(n, m):
    avg = (n + m) // 2  
    if ((avg * 2) == (n + m)):
        avg += 1
    return str(avg)

print(rounded_avg(n, m))