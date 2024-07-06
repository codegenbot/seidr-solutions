def sort_numbers(numbers: str) -> str:
    num_dict = {
        "zero": 0,
        "one": 1,
        "two": 2,
        "three": 3,
        "four": 4,
        "five": 5,
        "six": 6,
        "seven": 7,
        "eight": 8,
        "nine": 9,
        "ten": 10,
        "eleven": 11,
        "twelve": 12,
        "thirteen": 13,
        "fourteen": 14,
        "fifteen": 15,
        "sixteen": 16,
        "seventeen": 17,
        "eighteen": 18,
        "nineteen": 19,
        "twenty": 20,
        "thirty": 30,
        "forty": 40,
        "fifty": 50,
        "sixty": 60,
        "seventy": 70,
        "eighty": 80,
        "ninety": 90,
    }
    hundreds = {
        "": 0,
        "-one": 1,
        "-two": 2,
        "-three": 3,
        "-four": 4,
        "-five": 5,
        "-six": 6,
        "-seven": 7,
        "-eight": 8,
        "-nine": 9,
    }
    thousands = {
        "": 0,
        "one": 1,
        "two": 2,
        "three": 3,
        "four": 4,
        "five": 5,
        "six": 6,
        "seven": 7,
        "eight": 8,
        "nine": 9,
    }
    nums = list(
        map(
            lambda x: (
                int(x)
                if x.isdigit()
                else (
                    (
                        int(num_dict[x.replace("-", "")]) * 1000
                        + int(thousands.get(x, num_dict[x]).replace(" ", ""))
                    )
                    if "thousand" in x or "hundred" in x
                    else (num_dict[x] if len(x) > 3 else int(x))
                )
            ),
            numbers.split(),
        )
    )
    return " ".join(map(str, set(nums)))