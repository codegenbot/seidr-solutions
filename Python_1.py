paren_string = paren_string.replace(" ", "")
    result, balance, group = [], 0, ""
    for char in paren_string:
        group += char
        if char == '(':
            balance += 1
        elif char == ')':
            balance -= 1
        if balance == 0:
            result.append(group)
            group = ""
    return result