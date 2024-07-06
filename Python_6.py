```
def parse_nested_parens(s):
    while "{}" in s:
        start = s.index("{")
        end = s.index("}")
        main_input = s[:start] + input().strip() + s[end + 1 :]
        s = main_input
    return s


def main():
    outer_input = input().strip()
    print(parse_nested_parens(outer_input))


if __name__ == "__main__":
    main()