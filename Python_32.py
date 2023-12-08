def find_zero(xs):
    # Read user input
    x = int(input("Enter a number: "))
    
    # Perform calculations
    result = 0
    for i in range(len(xs)):
        if xs[i] == x:
            result += 1
    
    # Return result
    return result