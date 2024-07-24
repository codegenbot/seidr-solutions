```
from typing import List


def all_prefixes(string: str) -> List[str]:
    result = []
    for i in range(1, len(string) + 1):
        result.append(string[:i])
    return result

if __name__ == "__main__":
    user_input = input("Enter a string: ")
    prefixes = all_prefixes(user_input)
    print(prefixes)