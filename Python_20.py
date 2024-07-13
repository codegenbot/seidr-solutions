```
def find_closest_elements():
    while True:
        try:
            x1 = list(map(int, input("Enter first set of x-coordinates separated by space: ").split()))
            if len(x1) >= 2:
                break
            print("Please enter at least two integers.")
        except ValueError:
            print("Invalid input. Please enter integers only.")

    while True:
        try:
            y1 = list(map(int, input("Enter first set of y-coordinates separated by space: ").split()))
            if len(y1) >= 2 and len(set(y1)) == len(y1):
                break
            print("Please enter at least two distinct integers.")
        except ValueError:
            print("Invalid input. Please enter integers only.")

    min_diff = float('inf')
    closest_pair = None

    for i in range(len(x1)):
        for j in range(i+1, len(x1)):
            diff = abs((x1[i] - x1[j])**2 + (y1[i] - y1[j])**2)**0.5
            if diff < min_diff:
                min_diff = diff
                closest_pair = ((x1[i], y1[i]), (x1[j], y1[j]))

    return "Closest pair is: ({}, {}) and ({}, {}) with a difference of {}".format(*closest_pair[0], *closest_pair[1], min_diff)