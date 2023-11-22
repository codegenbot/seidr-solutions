from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

if __name__ == "__main__":
    n = int(input()) 
    strings = []
    for _ in range(n):
        strings.append(input())
        
    substring = input()
    
    result = filter_by_substring(strings, substring) 
    
    for string in result:
        print(string)