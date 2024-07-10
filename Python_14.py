from typing import List


def get_all_prefixes(s: str) -> List[str]:
    return [s[: i + 1] for i in range(len(s))]


def all_prefixes() -> None:
    while True:
        s = input("Please enter a string: ")
        try:
            if isinstance(s, str):
                print("\n".join(get_all_prefixes(s)))
                break
            else:
                print("Error: Please provide valid string.")
        except Exception as e:
            print(f"Unexpected error occurred: {e}")


if __name__ == "__main__":
    all_prefixes()