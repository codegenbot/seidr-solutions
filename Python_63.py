```
def fib(n):
    if n <= 1:
        return n
    else:
        return fib(n-1) + fib(n-2)

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