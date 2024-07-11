def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


filtered_strings = filter_by_prefix(
    [input() for _ in range(int(input("Enter number of strings: ")))],
    input("Enter prefix: "),
)