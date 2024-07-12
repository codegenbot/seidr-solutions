def factorize(n):
    return [i for i in range(1, n + 1) if n % i == 0]


try:
    print("Enter a number: ")
    n = int(input())

    result = factorize(n)
    print(result)

except ValueError:
    print("Invalid input. Please enter a valid number.")
except KeyboardInterrupt:
    print("No input received. Program terminated.")