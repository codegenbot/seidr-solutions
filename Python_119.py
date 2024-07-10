def match_parens(input_list):
    result_list = []
    for string in input_list:
        if set(string) == {'(', ')'}:
            stack = []
            for char in string:
                if char == '(':
                    stack.append('(')
                elif char == ')':
                    if stack and stack[-1] == '(':
                        stack.pop()
                    else:
                        stack.append(')')
            if not stack:
                result_list.append("YES")
            else:
                result_list.append("NO")
        else:
            result_list.append("NO")
    return result_list

input_list = []
n = int(input("Enter the number of strings: "))
for i in range(n):
    input_list.append(input("Enter string {}: ".format(i+1)))

result = match_parens(input_list)
print(result)