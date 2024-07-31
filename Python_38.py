def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        if len(group) == 3:
            if len(result) % 3 == 0:
                result += group
            else:
                last_group = group[1:] + group[0]
                if result[-1] != last_group[2]:
                    index = ord(last_group[2]) - ord("a")
                    if index < 3:
                        last_group = last_group[1:] + last_group[0]
                    elif index == 3:
                        last_group = "abc"[index - 4] + last_group[1:]
                    group = last_group
                result += group
            group = ""
        else:
            group += char
    if len(group) != 0:
        if len(result) % 3 == 0:
            result += group
        else:
            last_group = group[1:] + group[0]
            if result[-1] != last_group[2]:
                index = ord(last_group[2]) - ord("a")
                if index < 4:
                    last_group = last_group[1:] + last_group[0]
                elif index == 4:
                    last_group = "abc"[index - 5] + last_group[1:]
                group = last_group
            result += group
    return result