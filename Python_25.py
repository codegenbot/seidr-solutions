def factorize(n):
    return [i for i in range(1, n + 1) if n % i == 0]

while True:
    try:
        n = int(input("Enter a number: "))
        result = factorize(n)
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")
    except KeyboardInterrupt:
        print("No input received. Program terminated.")