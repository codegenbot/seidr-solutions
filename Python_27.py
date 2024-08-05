def swap_case(string: str) -> str:
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

def check(func):
    test_string = input("Enter a string: ")
    result = func(test_string)
    print(result)

check(swap_case)