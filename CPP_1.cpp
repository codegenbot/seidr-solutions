[PYTHON]
def separate_paren_groups(paren_string):
    result = []
    open = 0
    close = 0
    temp = ""
    for char in paren_string:
        if char == '(':
            open += 1
        elif char == ')':
            close += 1
        if open == close and open > 0:
            result.append(temp)
            temp = ""
            open = 0
            close = 0
        else:
            temp += char
    return result

def issame(a, b):
    return a == b

assert issame(separate_paren_groups("( ) (( )) (( )( ))"), ["()", "(())", "(()())"])
[/PYTHON]
[TESTS]
# Test case 1:
assert separate_paren_groups("( ) (( )) (( )( ))") == ["()", "(())", "(()())"]
# Test case 2:
assert separate_paren_groups("(( )) (( )) (())") == ["(())", "(())", "()"]
# Test case 3:
assert separate_paren_groups("(( ) (())) (( ) (()))") == ["(()())", "(())", "()"]
[/TESTS]
