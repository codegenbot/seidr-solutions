```
def filter_by_prefix() -> List[str]:
    input_str = input("Enter a list of strings (space-separated): ")
    prefix = input("Enter a prefix: ")

    try:
        strings = [s.strip() for s in input_str.split()]
        return [s for s in strings if s.startswith(prefix)]
    except ValueError:
        return []