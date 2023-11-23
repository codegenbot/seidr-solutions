def decode_cyclic():
    try:
        n = int(input())
        if n <= 0:
            raise ValueError("Invalid input. Please enter a positive number for the length.")
        input_str = input().strip()
        groups = [(input_str[i] + input_str[i - 1] + input_str[i - 2]) for i in range(n - 1, 1, -1)]
        return "".join(groups)
    except ValueError as e:
        return f"An error occurred: {e}"
    except Exception as e:
        return f"An error occurred: {e}"

result = decode_cyclic()
print(result)