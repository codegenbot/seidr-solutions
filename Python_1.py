def separate_paren_groups(s: str) -> List[str]:
    def check(c, separate_paren_groups=0):
        if c == "(":
            separate_paren_groups += 1
        elif c == ")":
            separate_paren_groups -= 1
        if separate_paren_groups > 0:
            return "not a valid"
        else:
            return "valid"

    result = ""
    separate_paren_groups = 0
    for char in s:
        if char == "(" or char == ")":
            if check(char, separate_paren_groups) == "not a valid":
                result += "(" + s[s.index(char) :] + "\n"
                break
        result += char
    return [result]