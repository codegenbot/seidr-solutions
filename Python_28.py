def concatenate_strings():
    strings = input("Enter multiple strings separated by space: ").split()
    result = "".join(strings)
    print("Concatenated string is:", result)


concatenate_strings()