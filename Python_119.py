from typing import List

def match_parens(lst: List[str]) -> str:
    for s in lst:
        stack = []
        for char in s:
            if char == "(":
                stack.append(char)
            elif char == ")":
                if not stack:
                    return "No"
                stack.pop()
        if stack:
            return "No"
    return "Yes"