def process_string(input_str: str) -> str:
    if len(input_str) == 0:
        return "Error: Input string is empty."
    result = ""
    for char in input_str:
        if not char.isalnum():
            return "Error: Input contains non-alphanumeric characters."
    for i in range(0, len(input_str), 3):
        result += input_str[(i+1) % len(input_str)] + input_str[(i+2) % len(input_str)] + input_str[i]
    return result