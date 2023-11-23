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
if ' ' not in input_str:
  print("Invalid input. Please enter both the length and the string separated by a space.")
else:
  input_length, input_str = input_str.split()
  input_length = int(input_length)
  result = decode_cyclic(input_length, input_str)
  print(result)