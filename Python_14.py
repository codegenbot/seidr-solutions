def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

# Example usage:
# string = input("Enter a string: ")
# print(prefixes(string))