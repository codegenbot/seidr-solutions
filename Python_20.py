def find_closest_elements():
    # Task description: Read a list of integers from the user, and find the two closest numbers in the list.
    # Function signature: def find_closest_elements():
    
    # Read the list of integers from the user
    numbers = [int(x) for x in input().split()]

    # Sort the list of integers in ascending order
    numbers.sort()

    # Initialize variables to store the closest numbers and their difference
    closest_numbers = []
    min_difference = float('inf')

    # Iterate through the list of numbers and compare the difference with the minimum difference
    for i in range(len(numbers)-1):
        difference = abs(numbers[i] - numbers[i+1])
        if difference < min_difference:
            min_difference = difference
            closest_numbers = [numbers[i], numbers[i+1]]

    # Print the closest numbers
    print(*closest_numbers)