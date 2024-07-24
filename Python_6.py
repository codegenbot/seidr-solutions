def max_nested_paren(paren_string):
    return max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)])

# Call the function with the input parameter
result = max_nested_paren(input())
print(result)