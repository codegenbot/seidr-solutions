input_string = input("Enter the input string: ")
if len(input_string) % 3 != 0:
    print("Input string length should be a multiple of three.")
else:
    result = decode_cyclic(input_string)
    print(result)