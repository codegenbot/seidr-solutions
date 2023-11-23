def decode_cyclic(input_length, input_str):
    try:
        n = int(input_length)
        if n <= 0:
            raise ValueError("Invalid input. Please enter a positive number for the length.")

        groups = [
            (input_str[i - 1] + input_str[i - 2] + input_str[i])
            for i in range(n - 1, -1, -1)
        ]
        return "".join(groups)

    except ValueError as e:
        return f"An error occurred: {e}"


input_str = input().strip()
input_length, input_str = input_str.split(' ', 1)
result = decode_cyclic(input_length, input_str)
print(result)