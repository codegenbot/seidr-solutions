```
def fib(n):
    if n <= 1:
        return n
    else:
        return fib(n-1) + fib(n-2)

while True:
    try:
        n = int(input("Enter a non-negative integer: "))
        if n >= 0:
            break
        print("Please enter a non-negative integer.")
    except ValueError:
        print("Invalid input. Please try again.")

print(fib(n))