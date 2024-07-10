```
def fibfib(n: int):
    if n <= 1:
        return "Fibonacci sequence for even numbers only"
    else:
        a, b = 0, 1
        result = [a]
        while a <= n:
            if a % 2 == 0:  
                break
            a, b = b, a+b
            result.append(a)
        return str(result)

n = int(input("Enter an integer: "))
print(fibfib(n))