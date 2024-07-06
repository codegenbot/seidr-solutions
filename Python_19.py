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
    hundreds = [
        "one hundred",
        "two hundred",
        "three hundred",
        "four hundred",
        "five hundred",
        "six hundred",
        "seven hundred",
        "eight hundred",
        "nine hundred",
    ]

    nums = list(
        map(
            lambda x: num_dict[x] if x in num_dict else int(x) if x.isdigit() else None,
            numbers.split(),
        )
    )

    for i, n in enumerate(nums):
        if n is None:
            if numbers.split()[i] in hundreds:
                nums[i] = 100
            elif numbers.split()[i].endswith("teen"):
                nums[i] = num_dict[numbers.split()[i]]
            else:
                nums[i] = int(numbers.split()[i])

    return " ".join(sorted(map(str, set(nums))))