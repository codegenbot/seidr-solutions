def concatenate(strings: List[str]) -> str:
    concatenated_string = ""
    for string in strings:
        if not string:
            print("Please enter non-empty strings.")
            continue
        concatenated_string += string + " "
    return concatenated_string.strip()