```python
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2  
    if (avg * 2) == (n + m):  
        avg += 1
    return str(bin(int(avg))[2:])

n = int(input("Enter first integer: "))
m = int(input("Enter second integer: "))

print(rounded_avg(n, m))