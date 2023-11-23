def separate_paren_groups(paren_string):
    groups = paren_string.replace(" ", "").lstrip('(').rstrip(')').split(')(')
    return groups

paren_string = input().strip().rstrip(')').lstrip('(')
result = separate_paren_groups(paren_string)
print(result)