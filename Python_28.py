def concatenate_strings():
    strings = input("Enter multiple strings separated by space: ").split()
    result = "".join(strings)
    print(result)


concatenate_strings()