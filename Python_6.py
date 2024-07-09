def max_count_parenthesis(paren_string):
    return [max([s.count("(") for s in group.split()]) for group in paren_string.split()]

paren_string = input("Enter a string with parenthesis groups: ")
result = max_count_parenthesis(paren_string)
print(result)