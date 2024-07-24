def main():
    user_input = input("Enter a list of strings (comma-separated): ")
    prefix = input("Enter the prefix to filter by: ")

    strings = [s.strip() for s in user_input.split(",")]
    filtered_strings = filter_by_prefix(strings, prefix)

    if not filtered_strings:
        print(f"No strings match the '{prefix}' prefix.")
    else:
        print("Filtered strings:")
        for string in filtered_strings:
            print(string)


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


if __name__ == "__main__":
    main()