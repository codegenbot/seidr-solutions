def fractionAddition(self, numerator: int, denominator: int) -> str:
    if not denominator:
        return f"{numerator}/1"

    result = f"{numerator}/{denominator}"

    return result