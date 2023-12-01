def match_parens(lst):
    stack = []
    for s in lst:
        for char in s:
            if char == "(":
                stack.append(char)
            elif char == ")":
                if len(stack) == 0:
                    return "No"
                stack.pop()
    if len(stack) != 0:
        return "No"
    return "Yes"


def match_parens(lst):
    counter = 0
    for s in lst:
        for char in s:
            if char == "(":
                counter += 1
            elif char == ")":
                counter -= 1
                if counter < 0:
                    return "No"
    if counter != 0:
        return "No"
    return "Yes"