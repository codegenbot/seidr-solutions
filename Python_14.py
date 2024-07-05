def get_prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]


string = input("Enter a string: ")
print(get_prefixes(string))