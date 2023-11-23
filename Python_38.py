def decode_cyclic():
    try:
        n = int(input("Enter the length of the string: "))
        if n <= 0:
            raise ValueError("Invalid input. Please enter a positive number for the length.")

        input_str = input("Enter the string: ").strip()

        groups = [(input_str[i - 1] + input_str[i - 2] + input_str[i]) for i in range(n - 1, -1, -1)]
        return "".join(groups)

    except ValueError as e:
        return f"An error occurred: {e}"


result = decode_cyclic()
print(result)