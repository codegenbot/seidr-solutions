def prime_fib(n):
    return last_prime_fib

while True:
    try:
        n = int(input())
    except EOFError:
        break
    except ValueError:
        print("Invalid input.")
    else:
        print(prime_fib(n))