input_str = input("Enter space-separated or comma-separated numbers: ")
if not input_str.strip():
    print("Error: No input provided")
    exit()

input_str = input_str.replace(",", " ")  

numbers = [float(x.strip()) for x in input_str.split()]
if any(not isinstance(num, (int, float)) or num < 0.0 for num in numbers):
    raise ValueError("Input list must contain only positive numbers")

min_val = min(numbers)
max_val = max(numbers)
result = [(x - min_val) / (max_val - min_val) for x in numbers]
print(result)

if any(not isinstance(num, (int, float)) or num < 0.0 for num in result):
    print("Error: Input list must contain only positive numbers")
    exit(1)