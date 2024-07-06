```Python
def parse_nested_parens(s):
    while "{}" in s:
        start = s.index("{")
        end = s.index("}")
        inner_input = input().strip()
        s = s[:start] + inner_input + s[end + 1 :]
    return s

def main():
    outer_input = input().strip()
    stack = []
    while "{}" in outer_input:
        start = outer_input.index("{")
        end = outer_input.index("}")
        if len(stack) > 0 and stack[-1] == "{":
            inner_input = input().strip()
            outer_input = outer_input[:start] + inner_input + outer_input[end + 1 :]
        else:
            stack.append("{")
            outer_input = outer_input[:start] + input().strip() + outer_input[end + 1 :]
            stack.pop()
    print(outer_input)

if __name__ == "__main__":
    main()