def match_parens(input_list):
    output_list = []
    for string in input_list:
        stack = []
        for char in string:
            if char == '(':
                stack.append(char)
            elif char == ')' and stack and stack[-1] == '(':
                stack.pop()
            else:
                stack.append(char)
        output_list.append(len(stack) == 0)
    
    return output_list