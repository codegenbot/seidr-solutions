```
from typing import List

def all_prefixes(string: str) -> List[str]:
    return [""] + [string[:i] for i in range(1, len(string) + 1)]

if __name__ == "__main__":
    string = input("Enter a string: ")
    all_prefixes_result = all_prefixes(string)
    print(all_prefixes_result)