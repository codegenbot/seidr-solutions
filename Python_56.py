def correct_bracketing(brackets: str):
    return brackets.count("<") == brackets.count(">") and all(
        b1 != b2 for b1, b2 in zip(brackets, brackets[1:] + brackets[:-1])
    )