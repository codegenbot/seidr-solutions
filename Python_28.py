def concatenate_strings():
    strings = input("Enter multiple strings (separated by space): ")
    list_of_strings = strings.split()
    result = concatenate(list_of_strings)
    print(f"Concatenated string: {result}")