def parse_nested_parens(s):
    while '{}' in s:
        start = s.index('{')
        end = s.index('}')
        user_input = str(input()).strip()
        s = s[:start] + user_input + s[end+1:]
    return s

main_input = input().strip()
print(parse_nested_parens(main_input))