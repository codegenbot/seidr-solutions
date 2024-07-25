```
def main():
    print("Please enter a positive integer to check if it's prime.")
    while True:
        try:
            num = int(input("Enter a number: "))
            if num < 2:
                print("Please enter a positive integer.")
            else:
                print(is_prime(num))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")