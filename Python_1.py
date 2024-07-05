from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    balance = 0
    start = 0
    for i, char in enumerate(paren_string):
        if char == "(":
            if balance == 0:
                start = i
            balance += 1
        elif char == ")":
            balance -= 1
            if balance == 0:
                result.append(paren_string[start : i + 1])
    return result

if __name__ == "__main__":
    paren_string = input("Enter the parenthesis string (no spaces, only '(' and ')'): ").strip()
    if set(paren_string) <= {"(", ")"}:
        print(separate_paren_groups(paren_string))
    else:
        print("Invalid input. Please enter a string containing only '(' and ')'.")