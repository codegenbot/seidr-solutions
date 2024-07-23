from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""

    for char in paren_string.replace(" ", ""):
        if char == "(":
            temp += char
        elif char == ")":
            while temp and (temp[-1] != "("):
                result.append(temp[:-1])
                temp = temp[:-1].rstrip()
            if temp and temp[-1] == "(":
                temp += char
            elif not temp:
                temp += char
        else:
            temp += char
    if temp:
        result.append(temp)

    return result


def main():
    print(
        separate_paren_groups(input("Enter a string of parentheses: "))
    )


if __name__ == "__main__":
    main()