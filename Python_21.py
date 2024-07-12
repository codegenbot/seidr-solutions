def rescale_to_unit():
    numbers = input("Enter space-separated numbers: ").split()
    try:
        numbers = [float(num) for num in numbers]
    except ValueError:
        return "Invalid input. Please enter only numbers"

    if not numbers:
        return "No input provided"

    zero_count = sum(1 for x in numbers if x == 0)
    if zero_count > 0:
        return "All inputs are zero. Please provide non-zero values"
    else:
        min_val = min(numbers)
        max_val = max(numbers)
        rescaled_numbers = [(x - min_val) / (max_val - min_val) for x in numbers]
        return ", ".join(str(num) for num in rescaled_numbers)