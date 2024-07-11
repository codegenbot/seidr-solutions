def separate_paren_groups(paren_string: str) -> List[str]:
    def check(s, stack=0):
        result = []
        current_group = ""
        for char in s:
            if char == "(":
                if stack > 0:
                    current_group += "("
                else:
                    result.append(current_group)
                    current_group = "(" + char
                    stack += 1
            elif char == ")":
                stack -= 1
                current_group += char
                if stack == 0:
                    result.append(current_group)
                    current_group = ""
        if stack > 0:
            current_group += ")" * stack
            result.append(current_group)
        return result

    return check(paren_string)