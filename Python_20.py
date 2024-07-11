def find_closest_elements():
    user_input = input("Enter a space-separated sequence of numbers: ")
    numbers = list(map(int, user_input.split()))
    
    min_diff = float('inf')
    closest_pair = (None, None)
    
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[j] - numbers[i])
            if diff < min_diff:
                min_diff = diff
                closest_pair = tuple(sorted([numbers[i], numbers[j]]))
    
    return closest_pair