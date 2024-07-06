
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    result = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            stack.pop()
            result.append(len(stack))
    return result
```
This code will generate a list of integers, where each integer represents the deepest level of nesting in each group of parentheses. The function takes a string as input, and returns a list of integers. The string is composed of multiple groups of nested parentheses separated by spaces. For example, the string "(()()) ((())) () ((())()())" has four groups of nested parentheses, with the deepest level of nesting being three in the third group.

It's worth noting that this function assumes that the input string is well-formed and doesn't contain any syntax errors. If the input string contains unbalanced parentheses or other syntax errors, the function may produce incorrect results or raise an exception.