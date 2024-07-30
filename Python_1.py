def separate_paren_groups(s):
    result = []
    current_group = ""
    opening_bracket_count = 0

    for char in s:
        if char == "(":
            if opening_bracket_count > 0:
                current_group += char
            opening_bracket_count += 1
        elif char == ")":
            opening_bracket_count -= 1
            current_group += char
            if opening_bracket_count == 0:
                result.append(current_group)
                current_group = ""
        else:
            if opening_bracket_count > 0:
                current_group += char
            else:
                result.append(char)

    return result