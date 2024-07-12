def check():
    while True:
        num = input("Enter a number: ")
        try:
            n = int(num.strip())
            if n != 0 and n >= 0:
                if sumOfDigits(n) % 3 == 0:
                    print("The number is divisible by 3")
                else:
                    print("The number is not divisible by 3")
            else:
                print("Please enter a non-negative integer.")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")


check()