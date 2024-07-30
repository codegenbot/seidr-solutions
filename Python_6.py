import sys

paren_string = next(sys.stdin).strip()

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

print(parse_nested_parens(paren_string))