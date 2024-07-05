def get_prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]


user_input = input()
print(get_prefixes(user_input))