try:
    n = int(input("Enter a number to factorize: "))
except ValueError:
    print("\nInvalid input. Please enter a valid number.")
    exit()