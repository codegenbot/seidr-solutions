def swap_case(string: str) -> str:
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

def check(func):
    test_cases = ['Hello', 'WORLD', 'PyThOn']
    for test_case in test_cases:
        result = func(test_case)
        print(result)

check(swap_case)