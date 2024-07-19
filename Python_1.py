```
def separate_paren_groups(paren_string: str) -> List[str]:
    def balance_paren(s: str) -> int:
        stack = []
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if not stack:
                    return 0
                stack.pop()
        return len(stack)

    result = []
    i, j = 0, 0
    while j < len(paren_string):
        if balance_paren(paren_string[i:j+1]) > 0:
            result.append(paren_string[i:j+1])
            i = j + 1
        j += 1
    return [x.replace(' ', '') for x in result]