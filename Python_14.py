def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string)]

# Read input
input_string = input()

# Call the function with the input
result = all_prefixes(input_string)

# Print the result
print(result)