from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

if __name__ == "__main__":
    user_input = input().split()
    print(concatenate(user_input))