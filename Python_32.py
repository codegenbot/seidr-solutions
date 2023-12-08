def find_zero(xs):
    # Read input from the user
    x = int(input("Enter a number: "))
    
    # Find the index of the first occurrence of 0 in the list
    try:
        i = xs.index(x)
    except ValueError:
        print("No zero found")
        return None
    
    # Return the output corresponding to the task description
    return f"The first occurrence of {x} is at index {i}"