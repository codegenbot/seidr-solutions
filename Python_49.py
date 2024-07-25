```
def main():
    print("Please enter a series of integers to check if they're prime, or '0' to quit.")
    while True:
        try:
            num = input("Enter a number (or 0 to quit): ")
            if num == '0':
                break
            if not num.isnumeric():
                print("Invalid input. Please enter a valid integer.")
                continue
            num = int(num)
            print(is_prime(num))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")