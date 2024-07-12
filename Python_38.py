input_string = input("Enter a string: ").strip()
if input_string.isupper():
    if len(input_string) >= 3:
        result = decode_cyclic(input_string)
        print(result)
    else:
        print("Input should have a length of at least 3. Please try again.")
else:
    print("Input should contain only uppercase letters. Please try again.")