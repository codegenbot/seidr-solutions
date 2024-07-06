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
    thousands = {"zero": 0, "one": 1000}

    nums = []
    for word in numbers.split():
        if word.isdigit():
            nums.append(int(word))
        elif word in num_dict:
            nums.append(num_dict[word])
        elif len(word) == 3 and word[1:] in hundreds:
            nums.append(hundreds[word[1:]] * 100 + num_dict.get(word[0], 0))
        elif len(word) >= 4 and word[:3] in thousands and word[-3:] in hundreds:
            nums.append(thousands[word[:3]] + hundreds[word[-3:]])

    return " ".join(sorted(map(str, set(nums))))