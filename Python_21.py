try:
    input_str = input("Enter space-separated or comma-separated numbers: ")
    if not input_str.strip():
        print("Error: No input provided")
        exit()

    numbers = [float(x.strip()) for x in input_str.replace(',', ' ').split()]
    if any(not isinstance(num, (int, float)) for num in numbers):
        raise ValueError("Input list must contain only numbers")

    min_val = min(numbers)
    max_val = max(numbers)
    result = [(x - min_val) / (max_val - min_val) for x in numbers]
    print(result)

except ValueError as e:
    print(f"Error: {e}")
    exit(1)