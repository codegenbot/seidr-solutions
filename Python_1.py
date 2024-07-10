def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    i = 0
    while i < len(paren_string):
        if paren_string[i] == "(":
            count = 1
            for j in range(i + 1, len(paren_string)):
                if paren_string[j] == "(":
                    count += 1
                elif paren_string[j] == ")":
                    count -= 1
                if count == 0:
                    result.append(paren_string[i : j + 1].replace(" ", ""))
                    break
        i += 1
    return result