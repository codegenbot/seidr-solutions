from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    def find_next_close(i):
        count = 0
        while i < len(paren_string):
            if paren_string[i] == "(":
                count += 1
            elif paren_string[i] == ")":
                count -= 1
            i += 1
            if count == 0:
                return i - 1
        return -1

    def separate_group(i, j):
        return paren_string[i : j + 1]

    result = []
    i = find_next_close(0)
    while i != -1:
        result.append(separate_group(0, i))
        i = find_next_close(i + 1)
    if i == -1:
        result.append(paren_string)
    return result