```
def parse_nested_parens(s):
    while '{}' in s:
        s = s.replace('{}', input().strip())
    return s

print(parse_nested_parens("{}".format(input().strip())))