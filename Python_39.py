def main():
    try:
        n = int(input("Enter the value of n: "))
        if n > 0:
            result = prime_fib(n)
            print(result)
        else:
            print("The input value should be greater than 0.")
    except ValueError:
        print("Invalid input. Please enter a valid integer.")


main()