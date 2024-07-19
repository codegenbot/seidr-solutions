def find_closest_elements(numbers):
    if len(numbers) < 2:
        return "Error: At least 2 numbers are required"
    
    sorted_numbers = sorted(numbers)
    min_diff = float('inf')
    closest_pair = None
    
    for i in range(len(sorted_numbers) - 1):
        diff = sorted_numbers[i+ 1] - sorted_numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (sorted_numbers[i], sorted_numbers[i + 1])
    
    return closest_pair

if __name__ == "__main__":
    numbers = list(map(int, input().split()))

    closest_pair = find_closest_elements(numbers)
    
    if isinstance(closest_pair, str):
        print(closest_pair)
    else:
        print(*closest_pair)