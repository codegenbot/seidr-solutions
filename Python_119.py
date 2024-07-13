```
def match_parens(lst):
    for s in lst:
        s = s.translate(str.maketrans("", "", "!@#$%^&*()_+-={}[]|;:<>,.? "))
        count = 0
        has_opening = True
        for char in s:
            if char == "(":
                count += 1
                has_opening = True
            elif char == ")":
                if not has_opening:
                    return "No"
                count -= 1
                if count == 0:
                    has_opening = False
        if count > 0:
            return "No"
    return "Yes"