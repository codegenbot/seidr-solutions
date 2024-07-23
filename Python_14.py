def all_prefixes(string: str) -> list:
    result = []
    for i in range(len(string)+1):
        if i == 0:
            result.append("")
        else:
            prefix = string[:i]
            first_letter_upper = string[0].isupper()
            remaining_lowercase = all(c.islower() for c in string[1:i])
            if not first_letter_upper or remaining_lowercase:
                result.append(prefix.lower())
            else:
                result.append(prefix)
    return result