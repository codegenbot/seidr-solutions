from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


def main():
    strings = []
    while True:
        string = input().rstrip()
        if string == 'q':
            break
        strings.append(string)
    
    substring = input().rstrip()
    
    result = filter_by_substring(strings, substring)
    print(result)


if __name__ == "__main__":
    main()