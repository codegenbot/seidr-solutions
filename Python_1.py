def separate_paren_groups(paren_string: str) -> list[str]:
    def find_group(s):
        stack = []
        groups = []
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if stack:
                    stack.pop()
                else:
                    group = ''
                    while stack:
                        group += ')'
                        stack.pop()
                    groups.append(group + '(' + c)
        return groups

    s = paren_string.replace(" ", "")
    groups = find_group(s)
    return groups