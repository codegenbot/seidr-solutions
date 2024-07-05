def get_prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

# Call the function with user input
user_input = input("Enter a string: ")
result = get_prefixes(user_input)
print(result)