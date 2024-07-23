from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""

    for char in paren_string:
        if char == " ":
            if temp:
                result.append(temp)
                temp = ""
        elif char in ["(", ")"]:
            if not temp or (temp and temp[-1] in ["(", "))"]):
                if char == "(":
                    temp += char
                else:
                    while temp and (temp[-1] != "("):
                        result.append(temp[:-1])
                        temp = temp[:-1].rstrip()
                    if temp and temp[-1] == "(":
                        temp += ")"
                    elif not temp:
                        temp += ")"
        else:
            temp += char

    if temp:
        while temp and (temp[-1] != "("):
            result.append(temp[:-1])
            temp = temp[:-1].rstrip()
        if temp and temp[-1] == "(":
            temp += ")"
        elif not temp:
            temp += ")"
        result.append(temp)

    return result


def main():
    user_input = input("Enter a string of parentheses (separated by spaces): ")
    print(separate_paren_groups(user_input))


if __name__ == "__main__":
    main()