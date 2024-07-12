def int_to_mini_roman(number):
    roman = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    mini_roman = ""

    for i in range(0, number):
        if i < 10:
            mini_roman += "i" * (i + 1)
        elif i < 50:
            mini_roman += "l" if i == 40 or i == 50 else "iv" * (i // 4 + 1)
        elif i < 1000:
            mini_roman += (
                "m"
                if i == 900 or i == 500 or i == 400 or i == 1000
                else (
                    "c"
                    if i >= 90 and i <= 99 or i == 50
                    else "d" if i == 500 else "vii" * (i // 7 + 1)
                )
            )
        else:
            return "number out of range"
    return mini_roman.lower()