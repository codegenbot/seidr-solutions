from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    if not paren_string:
        return []

    result = []
    temp = ""
    in_group = False

    for char in paren_string:
        if char.isspace():
            if temp:
                result.append(temp)
                temp = ""
        elif char == "(":
            temp += char
            in_group = True
        elif char == ")":
            temp += char
            in_group = not in_group
            if not in_group and temp.count("(") == temp.count(")"):
                result.append(temp)
                temp = ""
        else:
            if in_group:
                temp += char
            else:
                if temp:
                    result.append(temp)
                    temp = ""
                temp += char

    if temp:
        result.append(temp)

    return result


def main():
    user_input = input("Enter a string of parentheses (separated by spaces): ")
    print(separate_paren_groups(user_input))


if __name__ == "__main__":
    main()