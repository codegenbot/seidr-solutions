def find_zero(xs: list):
    # Read user input
    n = int(input("Enter a number: "))
    
    # Find and return the index of the first occurrence of 0 in the list
    for i, x in enumerate(xs):
        if x == 0:
            return i
    return -1