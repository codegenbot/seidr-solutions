```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return [abs(paren_string.count('(') - paren_string.count(')')) for paren_string in paren_string]

# Modified code starts here
def main():
    n = int(input())
    input_list = []
    for _ in range(n):
        paren_string = input()
        input_list.append(paren_string)
    result = []
    for paren_string in input_list:
        result.append(parse_nested_parens(paren_string))
    print(result)

if __name__ == "__main__":
    main()
```