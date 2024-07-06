def find_zero(xs):
    try:
        xs = list(map(int, input().split()))
        # rest of the function body remains the same
    except ValueError:
        print("Invalid input")