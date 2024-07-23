```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []

    while True:
        if all(c in ["(", ")"] for c in paren_string):
            break
        print("Invalid input. Try again.")
        paren_string = " ".join(input("Enter a string of parentheses (separated by spaces): ").split())

    temp = ""
    for char in paren_string:
        if char == " ":
            if temp:
                result.append(temp)
                temp = ""
        elif char in ["(", ")"]:
            if char == "(":
                temp += char
            else:
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
    print(separate_paren_groups(input("Enter a string of parentheses (separated by spaces): ")))


if __name__ == "__main__":
    main()