try:
    input_string = input("Enter the string to decode: ")
    result = decode_shift(input_string)
    print(result)
except EOFError:
    pass