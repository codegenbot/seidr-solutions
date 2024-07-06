def parse_nested_parens(s):
    while "{}" in s:
        start = s.index("{")
        end = s.index("}")
        inner_input = input().strip()
        s = s[:start] + inner_input + s[end + 1 :]
    return s


def main():
    outer_input = input().strip()
    main_input = outer_input
    while "{}" in main_input:
        start = main_input.index("{")
        end = main_input.index("}")
        inner_input = input().strip()
        main_input = main_input[:start] + inner_input + main_input[end + 1 :]
    print(main_input)


if __name__ == "__main__":
    main()