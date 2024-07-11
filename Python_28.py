def concatenate(strings: List[str]) -> str:
    user_input = input("Enter strings (space-separated): ")
    input_strings = [s.strip() for s in user_input.split()]
    return ''.join(input_strings)