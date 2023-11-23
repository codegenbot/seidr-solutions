try:
    input_length = int(input())
    if input_length <= 0:
        raise ValueError("Invalid input. Please enter a positive number for the length.")
    
    input_string = input()
    
    def decode_cyclic(input_length, input_str):
        groups = [(input_str[i - 1] + input_str[i - 2] + input_str[i]) for i in range(input_length - 1, -1, -1)]
        return "".join(groups)
    
    result = decode_cyclic(input_length, input_string)
    print(result)
    
except ValueError as e:
    print(f"An error occurred: {e}")