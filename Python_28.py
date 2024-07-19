def concatenate_strings():
    strings = input("Enter multiple strings (comma separated): ")
    strings = [s.strip() for s in strings.split(",")]
    result = concatenate(strings)
    print(result)