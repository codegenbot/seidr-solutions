```
def main():
    while True:
        try:
            num = input("Enter a positive integer: ")
            if num.isdigit() and int(num) > 0:
                n = int(num)
                factors = factorize(n)
                print(factors)
                break
            else:
                print("Invalid input. Please enter an integer.")
        except ValueError as e:
            print("Invalid input. Please enter a positive integer.")