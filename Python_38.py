def decode_cyclic(input_str: str) -> str:
    n = len(input_str)
    if n <= 0:
        raise ValueError("Invalid input. Please enter a positive number for the length.")

    groups = [
        (input_str[i - 1] + input_str[i - 2] + input_str[i])
        for i in range(n - 1, -1, -1)
    ]
    return "".join(groups)


result = decode_cyclic(input())
print(result)