def find_closest_elements(input_list):
    numbers = sorted(input_list)
    closest_numbers = []
    min_difference = float('inf')
    for i in range(len(numbers)-1):
        difference = abs(numbers[i] - numbers[i+1])
        if difference < min_difference:
            min_difference = difference
            closest_numbers = [numbers[i], numbers[i+1]]
    return tuple(closest_numbers)