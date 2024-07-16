try:
    input_string = input()
    if not input_string:
        raise ValueError("Input string cannot be empty.")
    result = decode_cyclic(input_string)
    print(result)
except Exception as e:
    print(f"Error: {e}")