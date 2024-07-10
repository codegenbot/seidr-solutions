from typing import List


def all_prefixes(s: str) -> List[str]:
    string = input("Please enter a string: ")
    return [string[: i + 1] for i in range(len(string))]


def main():
    print(all_prefixes(""))


if __name__ == "__main__":
    main()