paren_strings = input("Enter a list of parenthesized strings separated by spaces: ").split()

def parse_nested_parens(paren_strings):
    def is_balanced(paren_str):
        stack = []
        for char in paren_str:
            if char == '(':
                stack.append(char)
            elif char == ')':
                if not stack:
                    return False
                stack.pop()
        return len(stack) == 0

    return [is_balanced(paren_str) for paren_str in paren_strings]

print(parse_nested_parens(paren_strings))