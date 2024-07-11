```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    def check(string: str) -> str:
        stack = []
        result = ''
        for char in string:
            if char == '(':
                stack.append(char)
                result += ' ('
            elif char == ')':
                if stack:
                    stack.pop()
                    result += ' )'
                else:
                    return 'Invalid parentheses'

        if stack:
            return 'Unbalanced parentheses'
        return result.strip('()') + ')'


    strings = [check(s) for s in paren_string.split(',')]
    return strings