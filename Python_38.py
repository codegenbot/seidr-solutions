def decode_cyclic():
    try:
        n = int(input())
        if n <= 0:
            raise ValueError("Invalid input. Please enter a positive number for the length.")

        input_str = input()

        groups = [(input_str[i - 1] + input_str[i - 2] + input_str[i]) for i in range(n - 1, -1, -1)]
        return "".join(groups)

    except ValueError as e:
        return f"An error occurred: {e}"
    
    except EOFError:
        return "An error occurred: Unexpected end of input"


result = decode_cyclic()
print(result)