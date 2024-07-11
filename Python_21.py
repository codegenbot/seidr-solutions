```
def rescale_to_unit(input_str):
    try:
        numbers = [float(num) for num in input_str.split(',')]
        if not numbers:
            return []
        
        min_val = min(numbers)
        max_val = max(numbers)
        
        if min_val == max_val:
            return [0.0] * len(numbers)  # or any other value
        
        return [(x - min_val) / (max_val - min_val) for x in numbers]
    except ValueError:
        return ["Invalid input. Please enter a list of floating-point numbers."]