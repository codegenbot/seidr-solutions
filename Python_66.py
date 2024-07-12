```Python
def check():
    num = input("Enter a number: ")
    if not num.replace('.','',).isnumeric():
        print("Invalid input. Please enter a valid integer.")
    else:
        n = int(num)
        if n != 0 and n >= 0:
            if sumOfDigits(n) % 3 == 0:
                print("The number is divisible by 3")
            else:
                print("The number is not divisible by 3")
        else:
            print("Please enter a non-negative integer.")

if __name__ == "__main__":
    while True:
        check()