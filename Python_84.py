```
while True:
    try:
        K = int(input("Enter a number (0 or 1): "))
        if K == 0 or K == 1:
            print(f"Output: {K}")
        else:
            print("Invalid input. Try again!")
    except ValueError:
        print("Invalid input. Please enter a whole number.")
else:
    break