def incr_list():
    """
    Returns a list of numbers from 1 to n.
    
    while True:
        try:
            n = int(input("Enter a number: "))
            if n < 1:
                print("Number should be positive. Try again.")
            else:
                return list(range(1, n+1))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

print(incr_list())