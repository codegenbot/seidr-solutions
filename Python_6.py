```
def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(len(stack))
        elif char == ')':
            level = stack.pop()
            result.append(level)
    return result
``` 
Modify the code as  The issue is that the code is not handling nested parentheses correctly. The function should return a list of integers, where each integer represents the level of nesting for a corresponding set of parentheses. However, the current implementation only returns the final level of nesting. To fix this, you can modify the code to use a stack data structure to keep track of the levels of nesting as you iterate through the input string. When you encounter an opening parenthesis, you push its level onto the stack. When you encounter a closing parenthesis, you pop the topmost level from the stack and append it to the result list. This way, you will get the correct levels of nesting for each set of parentheses in the input string..
You must only return correct code. Remove any triple quotes, language name or explanations. 