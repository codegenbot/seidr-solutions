def prefixes(s):
    return [s[:i+1] for i in range(len(s))]

input_string = raw_input("Enter a string: ")
result = prefixes(input_string)
print(result)