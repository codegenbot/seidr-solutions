from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    count = 0

    for char in paren_string:
        if char == " ":
            if temp:
                result.append(temp)
                temp = ""
        elif char in ["(", ")"]:
            if char == "(":
                count += 1
                temp += char
            else:
                count -= 1
                temp += char
            if count == 0:
                result.append(temp)
                temp = ""
        else:
            temp += char

    if temp:
        result.append(temp)

    return result


def main():
    user_input = input("Enter a string of parentheses (separated by spaces): ")
    print(separate_paren_groups(user_input))


if __name__ == "__main__":
    main()