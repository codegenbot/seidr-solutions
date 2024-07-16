try:
    n = int(input("Enter the value of n: ").strip())
except ValueError:
    print("Please enter a valid integer value for n.")