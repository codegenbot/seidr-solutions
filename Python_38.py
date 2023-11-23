def decode_cyclic():
    try:
        n = input("Enter the length of the string: ")
        if not n.isdigit():
            raise ValueError("Invalid input. Please enter a valid number for the length.")
        n = int(n)
        input_str = input("Enter the string: ").strip()
        if len(input_str) != n:
            raise ValueError("Invalid input. Please enter a string of the specified length.")
        groups = [input_str[i : i + 3] for i in range(0, n, 3)]
        groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
        return "".join(groups)
    except ValueError as e:
        print(str(e))
    except Exception as e:
        print(f"An error occurred: {e}")

result = decode_cyclic()
if result:
    print("Decoded cyclic string:", result)