def count_max_parentheses(paren_string):
    return [
        max([s.count("(") for s in group.split()]) for group in paren_string.split()
    ]


paren_string = input()
print(count_max_parentheses(paren_string))