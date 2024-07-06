def correct_bracketing(brackets: str):
    return (
        brackets.count("<") == brackets.count(">")
        and brackets.index(">") % (brackets.count("<") + 1) != 0
    )