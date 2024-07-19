def prefixes(s):
    return [s[:i+1] for i in range(len(s))]

string_input = input()
result = prefixes(string_input)
print(result)