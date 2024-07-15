def process_input(input_str):
    if not input_str:
        raise ValueError("Empty input")
    # Continue with your code here

try:
    input_str = input().strip()
    process_input(input_str)
except ValueError:
    print("Input should not be empty")
except EOFError:
    print("No more input data")