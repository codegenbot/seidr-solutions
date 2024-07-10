def find_closest_elements(numbers):
    closest_elements = ()
    min_diff = float('inf')
    
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                closest_elements = (numbers[i], numbers[j])
                min_diff = diff
                
    return closest_elements