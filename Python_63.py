```Python
def fibfib(n: int):
    if n <= 1:
        return 
    else:
        a, b = 0, 1
        result = [a]
        while b % 2 == 0 and b < n:
            a, b = b, a+b
            result.append(b)
        return str(result)

n = int(input("Enter an integer: "))
print(fibfib(n))