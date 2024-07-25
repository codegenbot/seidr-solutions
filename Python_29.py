from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

if __name__ == "__main__":
    input_list = input("Enter space-separated string: ").split()
    prefix = input("Enter prefix: ")
    print(filter_by_prefix(input_list, prefix))