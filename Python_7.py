from typing import List


def filter_by_substring(strings: List[str], pattern: str) -> List[str]:
    return [s for s in strings if s.startswith(pattern)]


def main():
    while True:
        pattern = input().strip()
        if pattern:
            break

    strings = input().split(", ")
    result = filter_by_substring(strings, pattern)
    print(result)


if __name__ == "__main__":
    main()