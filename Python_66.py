```
def check():
    while True:
        num = input("Enter a number: ")
        try:
            n = int(num.strip())
            if n != 0 and n >= 0:
                if sumOfDigits(n) % 3 == 0:
                    return "1"
                else:
                    return "0"
            else:
                print("Please enter a non-negative integer.")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")


print(check())