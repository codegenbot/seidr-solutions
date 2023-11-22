from typing import List


def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string))]


def main():
    string = input().strip()
    prefixes = all_prefixes(string)
    for prefix in prefixes:
        print(prefix)


if __name__ == "__main__":
    main()