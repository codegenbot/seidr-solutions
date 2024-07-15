def process_input(input_str):
    if not input_str:
        raise ValueError("Empty input")
    count = 0
    for char in input_str:
        if char in ['a', 'e', 'i', 'o', 'u']:
            count += 1
    print(count)

try:
    input_str = input().strip()
    process_input(input_str)
except ValueError:
    print("Input should not be empty")