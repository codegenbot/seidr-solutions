def swap_case(string: str) -> str:
    return "".join(
        [char.lower() if char.isupper() else char.upper() for char in string]
    )


def check(func):
    for test_case, expected_output in [
        ("Hello", "hELLO"),
        ("Python", "pYTHON"),
        ("123abc", "123ABC"),
    ]:
        assert func(test_case) == expected_output
    print("All test cases pass")


check(swap_case)