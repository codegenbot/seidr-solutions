def separate_paren_groups(paren_string):
    left_parentheses = 0
    right_parentheses = 0

    result = []
    temp_group = ""

    for char in paren_string:
        if char == " ":
            continue
        elif char == "(":
            left_parentheses += 1
            temp_group += char
        else:
            right_parentheses += 1
            temp_group += char

        if left_parentheses == right_parentheses and left_parentheses > 0:
            result.append(temp_group.strip())
            temp_group = ""
            left_parentheses = 0
            right_parentheses = 0

    if left_parentheses > 0 or (temp_group and temp_group[0] != "("):
        return []

    return [group for group in result if group]