from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = len(max(strings, key=len))
    longest_strs = [s for s in strings if len(s) == max_len]
    return longest_strs[0] if longest_strs else None

def main():
    n = int(input("Enter the number of strings: "))
    strings = []
    for i in range(n):
        string = input(f"Enter string {i+1}: ")
        strings.append(string)
    result = longest(strings)
    print("The longest string is:", result)

if __name__ == "__main__":
    main()