```
def parse_nested_parens(s):
    while "{}" in s:
        start = s.index("{")
        end = s.index("}")
        inner_input = input().strip()
        s = s[:start] + inner_input + s[end+1:]
    return s

def main():
    outer_input = input().strip()
    main_input = parse_nested_parens(outer_input)
    print(main_input)

if __name__ == "__main__":
    main()