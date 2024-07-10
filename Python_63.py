```
def fib(n):
    if n <= 1:
        return n
    else:
        a, b = 0, 1
        for _ in range(2, n+1):
            a, b = b, a+b
        return b

while True:
    try:
        n = int(input("Enter the number: "))
        if n < 0:
            print("Please enter a non-negative integer.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(fib(n))