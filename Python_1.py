def separate_paren_groups(s):
    result = []
    count = 0
    current_group = ""

    for char in s:
        if char == '(':
            count += 1
        current_group += char

        if char == ')':
            count -= 1

        if count == 0:
            result.append(current_group)
            current_group = ""

    return result