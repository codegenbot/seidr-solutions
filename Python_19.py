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

    hundreds_dict = {
        "zero hundred": 0,
        "one hundred": 100,
        "two hundred": 200,
        "three hundred": 300,
        "four hundred": 400,
        "five hundred": 500,
        "six hundred": 600,
        "seven hundred": 700,
        "eight hundred": 800,
        "nine hundred": 900,
    }

    thousands_dict = {
        "zero thousand": 0,
        "one thousand": 1000,
        "two thousand": 2000,
        "three thousand": 3000,
        "four thousand": 4000,
        "five thousand": 5000,
        "six thousand": 6000,
        "seven thousand": 7000,
        "eight thousand": 8000,
        "nine thousand": 9000,
    }

    nums = list(
        map(
            lambda x: (
                int(x)
                if x.isdigit()
                else (
                    num_dict[x]
                    if x in num_dict
                    else (
                        hundreds_dict[f"{int(x.split()[0])} hundred"]
                        if int(x.split()[0]) < 10 and x.split()[1] == "hundred"
                        else (
                            thousands_dict[f"{int(x.split()[0])} thousand"]
                            if int(x.split()[0]) < 10 and x.split()[1] == "thousand"
                            else None
                        )
                    )
                )
            ),
            numbers.split(),
        )
    )

    return " ".join(sorted(map(str, set(nums))))