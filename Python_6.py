```
def parse_nested_parens(s):
    while '{}' in s:
        start = s.index('{')
        end = s.index('}')
        s = s[:start] + input().strip() + s[end+1:]
    return s

main_input = input().strip()
print(parse_nested_parens(main_input))