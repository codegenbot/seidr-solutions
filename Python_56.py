def correct_bracketing(brackets: str) -> bool:
    opening = 0
    for bracket in brackets:
        if bracket == "<":
            opening += 1
        elif bracket == ">":
            opening -= 1
            if opening < 0:
                return False
    return opening == 0