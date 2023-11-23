from typing import List


def filter_integers(values: List[str]) -> List[int]:
    return [int(value) for value in values if value.isdigit()]


def main():
    values = input().strip().split()
    result = filter_integers(values)
    print(result)


if __name__ == "__main__":
    main()