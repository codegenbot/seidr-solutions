def find_closest_elements(x1=None, y1=None):
    while True:
        try:
            if x1 is None:
                x1 = list(map(int, input("Enter first set of x-coordinates separated by space: ").split()))
            if len(x1) >= 2:
                break
            print("Please enter at least two integers.")
        except ValueError:
            print("Invalid input. Please enter integers only.")

    while True:
        try:
            if y1 is None:
                y1 = list(map(int, input("Enter first set of y-coordinates separated by space: ").split()))
            if len(y1) >= 2 and len(set(y1)) == len(y1):
                break
            print("Please enter at least two distinct integers.")
        except ValueError:
            print("Invalid input. Please enter integers only.")

    min_diff = float('inf')
    closest_pair = None

    for x in x1:
        for y in y1:
            diff = abs(x - y)
            if diff < min_diff:
                min_diff = diff
                closest_pair = (x, y)

    return "Closest pair is: ({}, {}) with a difference of {}".format(*closest_pair, min_diff)