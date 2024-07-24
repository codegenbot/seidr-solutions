def main():
    while True:
        try:
            n = int(input("Enter a positive integer: "))
            if n <= 0:
                print("Please enter a positive integer.")
            else:
                factors = factorize(n)
                print(factors)
                break
        except ValueError as e:
            print("Invalid input. Please enter an integer.")