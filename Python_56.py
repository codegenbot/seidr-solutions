def correct_bracketing(brackets: str):
    balance = 0
    for bracket in brackets:
        if bracket == "<":
            balance += 1
        elif bracket == ">":
            balance -= 1
        if balance < 0:
            return False
    return balance == 0