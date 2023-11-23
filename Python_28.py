from typing import List

def concatenate(strings: List[str]) -> str:
    return " ".join(strings)

if __name__ == "__main__":
    num_strings, *input_strings = input().strip().split()
    
    output = concatenate(input_strings)
    print(output.strip())