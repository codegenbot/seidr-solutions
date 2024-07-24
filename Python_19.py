def sort_numbers(numbers: str) -> str:
    numbers = " ".join(
        num_dict.get(
            re.sub("[^zerooneonetwothreefourfivesixsevenyeightnine]+", "", num).lower()
        )
        for num in numbers.split()
    )
    return " ".join(
        map(
            str,
            sorted(
                [
                    int(num_dict[num]) if num.isdigit() else int(num)
                    for num in numbers.split()
                ]
            ),
        )
    )