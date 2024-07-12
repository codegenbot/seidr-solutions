```Python
while True:
    input_str = input("Enter your input: ")
    try:
        if not re.match(r"^\s*\d+(?:\s+\d+)*)$", input_str):
            raise ValueError
        numbers = [int(num) for num in input_str.split() if num.isdigit()]
        if len(numbers) > 0:
            break
        else:
            raise ValueError
    except ValueError:
        print("Invalid input. Please enter a string of space-separated integers.")

if len(numbers) > 1:
    return " ".join(map(str, sorted(numbers)))
else:
    return input_str