def separate_paren_groups(paren_string):
    stack = []
    result = []
    count = 0
    nesting_level = 0
    for c in paren_string:
        if c == "(":
            stack.append(c)
            count += 1
            nesting_level += 1
        elif c == ")":
            if len(stack) > 0 and stack[-1] == "(":
                stack.pop()
                count -= 1
                nesting_level -= 1
            else:
                # Handle consecutive opening or closing parentheses
                counter = 0
                while len(stack) > 0 and stack[-1] in ["(", ")"]:
                    if stack[-1] == c:
                        counter += 1
                    elif counter == 2:
                        result.append("".join(stack))
                        stack = []
                        count = 0
                if len(stack) > 0:
                    result.append("".join(stack))
                    stack = []
                    count = 0
    if nesting_level == 0:
        result.append("".join(stack))
    return [
        group
        for group in result
        if group[0] == "(" and group[-1] == ")" and len(group) % 2 == 0 and count == 0
    ]

def main():
    print(separate_paren_groups("( ) (( )) (( )( ))"))
    
if __name__ == "__main__":
    main()