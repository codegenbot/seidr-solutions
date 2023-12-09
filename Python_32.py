def find_zero(xs: list):
    # Read input from the user
    x = int(input("Enter a number: "))
    
    # Check if the input is in the list
    if x in xs:
        return 0
    else:
        return 1