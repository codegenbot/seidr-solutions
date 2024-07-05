from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    balance = 0
    current_group = []
    for char in paren_string:
        current_group.append(char)
        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1
        if balance == 0 and current_group:
            groups.append("".join(current_group))
            current_group = []
    return groups

if __name__ == "__main__":
    try:
        while True:
            paren_string = input().strip()
            if not paren_string:
                break
            result = separate_paren_groups(paren_string)
            print(result)
    except EOFError:
        pass