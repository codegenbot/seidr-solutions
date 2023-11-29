from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string

if __name__ == "__main__":
    n = int(input())  
    strings = []
    for _ in range(n):
        strings.append(input())  
    result = longest(strings)
    print(result)