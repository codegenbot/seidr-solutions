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

# Read input from user
input_list = []
n = int(input())
for i in range(n):
    input_list.append(input())

# Call function with input list
result = match_parens(input_list)
print(result)