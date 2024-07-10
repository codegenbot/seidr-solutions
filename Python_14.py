from typing import List

def get_all_prefixes(s: str) -> List[str]:
    return [s[:i+1] for i in range(len(s)+1)]

def all_prefixes() -> None:
    while True:
        s = input("Please enter a string: ")
        if not s:
            print("Error: Please provide valid input.")
        elif not isinstance(s, str):
            print("Error: Please enter a string.")
        else:
            result = "\n".join(get_all_prefixes(s))
            print(result)
            break

if __name__ == "__main__":
    all_prefixes()