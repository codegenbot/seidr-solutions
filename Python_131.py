def check():
    while True:
        try:
            n = int(input("Enter a number: "))
            if 100 <= n <= 999:
                total = sum_of_digits(n)
                print(f"The sum of digits is {total}")
                if total % 3 == 0:
                    print("This number is divisible by 3.")
                else:
                    print("This number is not divisible by 3.")
                break
            else:
                print("Invalid input. Please enter a three-digit integer.")
        except ValueError:
            print("Invalid input. Please enter an integer.")