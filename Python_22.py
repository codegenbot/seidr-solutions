from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

def main():
    values = input().split()
    values = [int(value) for value in values]
    result = filter_integers(values)
    print(result)

if __name__ == '__main__':
    main()