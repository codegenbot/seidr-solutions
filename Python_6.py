def parse_nested_parens(paren_string: str) -> int:
    balance = 0
    max_balance = 0

    for char in paren_string:
        if char == "(":
            balance += 1
            max_balance = max(max_balance, balance)
        elif char == ")":
            balance -= 1

    return max_balance


if __name__ == "__main__":
    paren_string = input("Enter the parentheses string: ")
    print(parse_nested_parens(paren_string))