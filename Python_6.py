```
def parse_nested_parens(s):
    while "{}" in s:
        start = 0
        end = 0
        for i in range(len(s)):
            if s[i] == '{':
                start = i
            elif s[i] == '}':
                end = i
        inner_input = input().strip()
        s = s[:start] + inner_input + s[end+1:]
    return s

def main():
    outer_input = input().strip()
    main_input = parse_nested_parens(outer_input)
    print(main_input)

if __name__ == "__main__":
    main()