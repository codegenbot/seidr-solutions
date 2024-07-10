from typing import list

def all_prefixes(input_string: str) -> list:
    return [input_string[:i] for i in range(1, len(input_string) + 1)]

if __name__ == "__main__":
    print(all_prefixes(input("Enter a string: ")))