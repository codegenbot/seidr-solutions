try:
    input_str = input().strip()
    if not input_str:
        raise ValueError("Empty input")
    # Continue with your code here
except ValueError:
    print("Input should not be empty")