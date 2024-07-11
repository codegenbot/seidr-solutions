def concatenate(strings: str) -> str:
    try:
        strings_list = [s.strip() for s in strings.split(",")]
        return "".join(sorted([strings_list[i] + strings_list[i+1] for i in range(0, len(strings_list)-1, 2)]))
    except ValueError:
        return "Error: Invalid input"