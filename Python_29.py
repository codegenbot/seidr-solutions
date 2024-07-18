def filter_strings():
    strings = input("Enter a list of strings separated by spaces: ").split()
    prefix = input("Enter the prefix to filter by: ")
    return [s for s in strings if s.startswith(prefix)]

result = filter_strings()
print(result)