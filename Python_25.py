```
while True:
    try:
        num = int(input("Enter a number: "))
        if num <= 0:
            print("Please enter a positive integer.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter an integer. Try again!")