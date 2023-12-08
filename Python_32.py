def find_zero(xs):
    # Read input from user
    num = int(input("Enter a number: "))
    
    # Find zero in the list
    for i in range(len(xs)):
        if xs[i] == 0:
            return i
    
    # If no zero is found, return -1
    return -1