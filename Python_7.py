from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


def main():
    substring = input().strip('\'')
    strings = input().strip('[]').replace('\'', '').split(', ')
    result = filter_by_substring(strings, substring)
    print(result)


if __name__ == "__main__":
    main()