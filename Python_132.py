def is_nested(string):
    open_count = 0
    for char in string:
        if char == '[':
            open_count += 1
        elif char == ']':
            if open_count == 0:
                return False
            open_count -= 1
    return open_count == 0