def decode_cyclic(input_length, input_str):
    try:
        n = input_length
        if n <= 0:
            raise ValueError("Invalid input. Please enter a positive number for the length.")

        groups = [
            (input_str[(i - 1) % len(input_str)] + input_str[(i - 2) % len(input_str)] + input_str[i])
            for i in range(n + 1)
        ]
        return "".join(groups)

    except ValueError as e:
        return f"An error occurred: {e}"


input_length = int(input().strip())  # Read the length of the input string
input_str = input().strip()  # Read the input string itself
result = decode_cyclic(input_length, input_str)
print(result)