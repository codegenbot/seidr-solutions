def max_open_parentheses(paren_string):
    return [max([s.count("(") for s in group.split()]) for group in paren_string.split()]
  
input_string = input("Enter the string of parentheses groups: ")
result = max_open_parentheses(input_string)
print(result)