```
try:
    num = int(input("Enter the number: "))
    if isinstance(num, int) and num >= 0:
        if num >= 3:
            check(num)
        else:
            print("Program did not receive expected input")
    else:
        print("Invalid input. Please enter a non-negative integer.")
except ValueError:
    print("Invalid input. Please enter a valid integer.")