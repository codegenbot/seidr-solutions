input_str = input("Enter a string: ").strip()
if not input_str or len(input_str) % 3 != 0:
    print("Please enter a non-empty string with a length multiple of 3.")
    return