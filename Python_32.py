def find_zero(xs):
    try:
        xs = [
            int(x)
            for x in raw_input("Enter a list of integers separated by spaces: ").split()
        ]
        for i, x in enumerate(xs):
            if x == 0:
                print(f"The first zero found at position {i}")
                return i
    except ValueError:
        print("Invalid input. Please enter a list of integers separated by spaces.")