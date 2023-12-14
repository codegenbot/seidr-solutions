```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return [abs(paren.count('(') - paren.count(')')) for paren in paren_string]

paren_string = "((())())"
result = parse_nested_parens(paren_string)
print(result)
```