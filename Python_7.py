from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

def main():
    strings = input().split()

    result = filter_by_substring(strings[1:], strings[0])
    print(result)

if __name__ == "__main__":
    main()