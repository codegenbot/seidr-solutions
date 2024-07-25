try:
    n = int(input("Enter a number: "))
    if n < 0:
        print("Invalid input. Please enter a non-negative integer.")
    else:
        result = prime_fib(n)
        if result is not None:
            print(result)
        else:
            print("No prime Fibonacci number found for the given input.")
except ValueError:
    print("Invalid input. Please enter a valid integer.")