from typing import List

def filter_integers(values: List[str]) -> List[int]:
    filtered_values = []
    for value in values:
        try:
            filtered_values.append(int(value))
        except ValueError:
            pass
    return filtered_values

if __name__ == "__main__":
    values = input().split()
    filtered_values = filter_integers(values)
    print(filtered_values)