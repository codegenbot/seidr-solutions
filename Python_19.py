def sort_numbers(numbers: str) -> str:
    num_dict = {
        i: int(i[:-3])
        for i in set(
            [
                i
                for i in numbers.replace("-", " ").split()
                if i.isdigit() or i[:-1].endswith(("st", "nd", "rd", "th"))
            ]
        )
    }
    nums = [num_dict[i] for i in numbers.split()]
    return " ".join(map(str, sorted(nums)))