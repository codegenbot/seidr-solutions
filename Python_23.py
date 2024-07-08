def strlen(string: str) -> int:
    count = 0
    for char in string:
        if char != ' ':
            count += 1
    return count