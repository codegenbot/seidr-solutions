def replace_multiple_spaces_with_single_space_and_change_non_alphanumeric_to_lowercase(text):
    result = ''
    count = 1
    for char in text:
        if char == ' ' and count > 1:
            continue
        elif char.isalnum():
            result += char.lower()
            count = 1
        else:
            result += char
            count = 1
    return result