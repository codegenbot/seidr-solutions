```
def check():
    try:
        num = int(input("Enter a number: "))
        if isinstance(num, int) and num >= 0:
            if sum(int(digit) for digit in str(num)) % 3 == 0:
                print("The number is divisible by 3")
            else:
                print("The number is not divisible by 3")
        else:
            print("Invalid input. Please enter a non-negative integer.")
    except ValueError:
        print("Invalid input. Please enter a valid integer.")