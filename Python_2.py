

def truncate_number(number: float) -> float:
    if number > 1:
        return number - int(number)
    else:
        return 0
