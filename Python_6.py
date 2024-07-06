```
def parse_nested_parens(s):
    while "{}" in s:
        start = s.index("{")
        end = s.index("}")
        s = s[:start+1] + input().strip() + s[end:].replace("}", "}").replace("{", "{{")
    return s

def main():
    outer_input = input().strip()
    main_input = parse_nested_parens(outer_input)
    print(main_input)

if __name__ == "__main__":
    main()