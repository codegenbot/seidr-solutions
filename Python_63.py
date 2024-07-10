```
def fib(n):
    if n <= 1:
        return n
    fib_sequence = [0, 1]
    for i in range(2, n+1):
        fib_sequence.append(fib_sequence[i-1] + fib_sequence[i-2])
    return fib_sequence[n]

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