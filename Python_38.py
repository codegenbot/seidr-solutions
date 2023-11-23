def decode_cyclic():
    try:
        n = int(input().strip())
        if n <= 0:
            print("Invalid input. Please enter a positive number for the length.")
            return

        input_str = input().strip()

        groups = [input_str[i : i + 3] for i in range(0, len(input_str), 3)]
        groups = [
            (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
        ]
        return "".join(groups)

    except Exception as e:
        print(f"An error occurred: {e}")


result = decode_cyclic()
if result:
    print(result)