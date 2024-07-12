def all_prefixes(input_string):
    return [input_string[:i+1] for i in range(len(input_string)]

input_string = input("Enter a string: ")
result = all_prefixes(input_string)
print(result)