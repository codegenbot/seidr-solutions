def parse_nested_parens(paren_string: str) -> int:
    balance = 0
    max_balance = 0

    for char in paren_string:
        if char == "(":
            balance += 1
            max_balance = max(max_balance, balance)
        elif char == ")":
            balance -= 1
            if balance < 0:  # Check for invalid parenthesis
                return -1

    if balance != 0:  # Check for unbalanced parenthesis
        return -1

    return max_balance if balance == 0 else -1


if __name__ == "__main__":
    paren_string = input().strip()
    print(parse_nested_parens(paren_string))