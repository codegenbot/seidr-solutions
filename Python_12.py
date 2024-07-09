def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    while True:
        try:
            user_input = input("Please enter a list of strings (space separated): ")
            strings_list = [s.strip() for s in user_input.split(",")]
            return max(strings_list, key=len)
        except ValueError:
            print("Invalid input. Please try again.")