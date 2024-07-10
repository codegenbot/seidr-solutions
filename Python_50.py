try:
    input_string = input("Please enter a string: ").strip()
    if input_string:
        result = decode_shift(input_string)
        print(result)
    else:
        print("Input string cannot be empty.")
except:
    print("Invalid input. Please enter a valid string.")