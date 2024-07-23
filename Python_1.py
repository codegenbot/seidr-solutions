from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    count = 0

    for char in paren_string.replace(" ", ""):
        if char == "(":
            count += 1
            temp += char
        elif char == ")":
            count -= 1
            temp += char
            if count == 0 and temp.count("(") == temp.count(")"):
                result.append(temp)
                temp = ""
        else:
            if count != 0:
                temp += char
            else:
                if temp:
                    result.append(temp)
                    temp = ""
                temp += char

    if temp:
        if temp.count("(") == temp.count(")"):
            result.append(temp)
        else:
            return []

    return result


def main():
    user_input = input("Enter a string of parentheses (separated by spaces): ")
    print(separate_paren_groups(user_input))


if __name__ == "__main__":
    main()