from typing import List


def get_all_prefixes(s: str) -> List[str]:
    return [s[: i + 1] for i in range(len(s))]


def all_prefixes() -> None:
    while True:
        try:
            s = input("Please enter a string (or 'quit' to exit): ")
            if not s or s.lower() == "quit":
                break
            print("\n".join(get_all_prefixes(s)))
        except Exception as e:
            print(f"Unexpected error occurred: {e}")


if __name__ == "__main__":
    all_prefixes()