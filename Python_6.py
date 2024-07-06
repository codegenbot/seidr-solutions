def parse_nested_parens(s):
    while '{}' in s:
        s = s.replace('{}', input().strip())
    return s

s = input().strip()
print(parse_nested_parens(s))