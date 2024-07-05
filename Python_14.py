def substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

user_input = input("Enter a string: ")
print(substrings(user_input))