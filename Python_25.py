def get_positive_integer():
    n = int(input("Please enter a positive integer greater than 1: "))
    while n <= 1:
        n = int(input("Invalid input. Please enter a positive integer greater than 1: "))
    return n