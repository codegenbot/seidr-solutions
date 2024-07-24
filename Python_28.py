def concatenate_strings():
    strings = input("Enter a list of strings separated by space: ").split()
    result = "".join(strings)
    print(f"The concatenated string is: {result}")