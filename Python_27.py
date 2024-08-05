def swap_case(string: str) -> str:
    return "".join(
        [char.lower() if char.isupper() else char.upper() for char in string]
    )


def check(func):
    test_string = input()
    print(func(test_string))


check(swap_case)